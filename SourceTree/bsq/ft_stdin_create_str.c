/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin_create_str.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguyout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 18:38:34 by mguyout           #+#    #+#             */
/*   Updated: 2016/09/20 22:55:51 by mguyout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_stdin_create_str(char *str)
{
	char	buf[1];
	int		i;
	int		lock;
	int 	x;
	int 	y;
	char	*tmp;
	
	x = -1;
	y = 0;
	lock = 0;
	i = 0;
	while (read(0, &buf,1) && lock < 2)
	{
		if (buf[0] != '\n')
		{
			str = ft_strcharcat(str, buf[0]);
			lock++;
		}
		else
		{
			while (str[i] != '\n')
				i++;
			while (y < i - 3)
				tmp[y] = str[y];
			y = ft_atoi(tmp);
		}
		if (lock == 1)
			x++;
	}
//	ft_concatprevnext();
	while (str[i])
		i++;
	while (read(0, &buf, 1))
	{
		str[i] = buf[0];
		i++;
	}
	return (str);
}
