/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 10:26:54 by tiskow            #+#    #+#             */
/*   Updated: 2016/09/06 10:26:57 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str);

int		main(void)
{
	char str [] = "fdfdsLKDfdsf0";
	int entier;

	entier = ft_str_is_alpha(str);
	printf("%d", entier);
	return (0);
}
