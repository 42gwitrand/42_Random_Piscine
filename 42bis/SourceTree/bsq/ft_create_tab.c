/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguyout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 22:34:27 by mguyout           #+#    #+#             */
/*   Updated: 2016/09/19 22:42:16 by mguyout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	**ft_create_tab(char *str)
{
	char **map;
	char *cpy;
	int i;
	int x;
	int	lock;

	lock = 0;
	i = 0;
	while (str[i++])
		;
	if (cpy = (char*)malloc(sizeof(char*) i + 1) == 0)
		return (NULL);
	i = 0;
	while (str[i++] != '\n')
		;
	i++;
	while (str[i++])
		cpy[x++] = str[i];
	cpy[x] = '\0';
	map = ft_split_whitespaces(cpy);
	return (map);
}
