/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcharcat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbenetre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 14:30:10 by tbenetre          #+#    #+#             */
/*   Updated: 2016/09/20 22:49:12 by mguyout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_strcharcat(char *src, char c)
{
	char	*copy;
	int		i;

	i = 0;
	while (src[i])
		i++;
	copy = (char*)malloc(sizeof(copy) * (i + 2));
	i = 0;
	while (src[i])
	{
		copy[i] = src[i];
		i++;
	}
	copy[i++] = c;
	copy[i] = '\0';
	return (copy);
}
