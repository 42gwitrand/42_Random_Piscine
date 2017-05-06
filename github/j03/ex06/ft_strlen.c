/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 17:09:48 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/01 17:09:50 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_strlen(char *str)
{
	int count;
	int i;

	i = 0;
	count = 0;
	while (*str[i] != '\0')
	{
		ft_putchar(*str[i]);
		i++;
		count++;
	}
	return (count);
}
