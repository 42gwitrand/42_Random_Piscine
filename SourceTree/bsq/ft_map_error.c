/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map_error.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/20 12:08:52 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/20 21:31:56 by mguyout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_check_fl(char *str, char *c)
{
	int i;

	i = 0;
	while (str[i++] != '\n')
		;
	i--;
	if (str[i] == c[2] && str[i - 1] == c[1] && str[i - 2] == c[0])
	{
		i = i - 3;
		while (i >= 0)
		{
			if (str[i] >= '0' && str[i] <= '9')
				i--;
			else
				return (0);
		}
	}
	return (1);
}

int	ft_check_c(char *str, char *c)
{
	int i;

	i = -1;
	while (str[++i] != '\n')
		;
	if (i < 4)
		return (0);
	while (str[i])
	{
		if (str[i] != c[0] && str[i] != c[1] && str[i] != '\n' && str[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_check_nbrl(char *str, char *c)
{
	char	*tmp;
	int		len;
	int		count;
	int		i;

	i = 0;
	count = 0;
	len = -1;
	tmp = NULL;
	while (str[i] != '\n')
		i++;
	if ((tmp = (char*)malloc(sizeof(char*) * (i - 3) + 1)) == 0)
		return (0);
	while (count < i - 3)
	{
		tmp[count] = str[count];
		count++;
	}
	count = -1;
	len = ft_atoi(tmp);
	i = -1;
	while (str[++i])
		if (str[i] == '\n')
			count++;
	printf("%d\n", count);
	printf("%d\n", len);
	if (len == count)
		return (1);
	return (0);
}

int	ft_check_lenl(char *str)
{
	int		i;
	int		count;
	int		x;

	x = 0;
	i = 0;
	count = 0;
	while (str[i++] != '\n')
		;
	i++;
	while (str[i++] != '\n')
		count++;
	while (str[i++])
	{
		if (str[i] == '\n')
		{
			if (count != x)
				return (0);
			x = -1;
		}
		else
			x++;
	}
	return (1);
}

int	ft_map_error(char *str, char *c)
{
	if (str == 0)
	{
		write(2, "map error1\n", 10);
		return (0);
	}
	if (ft_check_fl(str, c) == 0 || ft_check_lenl(str) == 0)
	{
		write(2, "map error2\n", 10);
		return (0);
	}
	if (ft_check_c(str, c) == 0 || ft_check_nbrl(str, c) == 0)
	{
		write(2, "map error3\n", 10);
		return (0);
	}
	return (1);
}
