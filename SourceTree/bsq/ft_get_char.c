/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_char.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguyout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 22:28:48 by mguyout           #+#    #+#             */
/*   Updated: 2016/09/20 22:21:36 by mguyout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_get_char(char *str)
{
	int		i;
	char	*c;
	int x;
	int z;

	z = 0;
	x = 0;
	i = 0;
	if ((c = (char*)malloc(sizeof(char*) * 3 + 1)) == 0)
			return (0);
	while (str[i] != '\n')
		i++;
	x = i - 3;
	while (z < 3)
	{
		c[z] = str[z + (i - 3)];
		z++;
	}
	c[z] = '\0';
	return (c);
}
