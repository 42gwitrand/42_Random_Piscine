/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 10:54:51 by tiskow            #+#    #+#             */
/*   Updated: 2016/09/06 10:54:53 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str);

int		main(void)
{
	char str [] = "fdfsd548  6--==++";
	int entier;

	entier = ft_str_is_printable(str);
	printf("%d", entier);
	return (0);
}
