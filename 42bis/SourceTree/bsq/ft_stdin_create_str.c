/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin_create_str.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguyout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 18:38:34 by mguyout           #+#    #+#             */
/*   Updated: 2016/09/19 22:27:31 by mguyout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	*ft_stdin_create_str(char *str)
{
	char	buf[1];
	int		i;

	i = 0;
	str = (char*)malloc(1);
	while (read(0, buf, 1))
		str[i++] = buf[0];
	str[i] = '\0';
	return (str);
}
