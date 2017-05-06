/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 10:51:08 by tiskow            #+#    #+#             */
/*   Updated: 2016/09/06 10:51:11 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int		main(void)
{
	char str [] = "DSS56";
	int entier;

	entier = ft_str_is_uppercase(str);
	printf("%d", entier);
	return (0);
}
