/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguyout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/08 17:43:32 by mguyout           #+#    #+#             */
/*   Updated: 2016/09/19 22:38:24 by mguyout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_check_word(char *str)
{
	int i;
	int x;
	int z;

	i = 0;
	x = 0;
	z = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		while (str[i] != '\t' && str[i] != ' ' && str[i])
		{
			i++;
			x = 1;
		}
		if (str[i] == '\t' || str[i] == ' ' || str[i] == '\0')
		{
			z += (x == 1) ? 1 : 0;
			x = 0;
			i++;
		}
	}
	return (z);
}

int		ft(char *str, int i)
{
	int z;

	z = 0;
	while (str[i] != '\t' && str[i] != ' ' && str[i])
	{
		z++;
		i++;
	}
	return (z);
}

char	**ft_split_whitespaces(char *str)
{
	char	**strdest;
	int		i;
	int		j;
	int		x;

	i = 0;
	j = 0;
	if ((strdest = malloc(sizeof(char*) * (ft_check_word(str) + 1))) == NULL)
		return (NULL);
	while (str[i])
	{
		while ((str[i] == '\t' || str[i] == ' ') && str[i])
			i++;
		if (str[i])
		{
			x = 0;
			if ((strdest[j] = malloc(sizeof(char) * ft(str, i) + 1)) == NULL)
				return (NULL);
			while (str[i] != '\t' && str[i] != ' ' && str[i])
				strdest[j][x++] = str[i++];
			strdest[j++][x] = '\0';
		}
	}
	strdest[j] = NULL;
	return (strdest);
}
