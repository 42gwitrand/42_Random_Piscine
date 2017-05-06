/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 10:40:36 by tiskow            #+#    #+#             */
/*   Updated: 2016/09/06 10:40:40 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_numeric(char *str);

int		main(void)
{
	char str [] = "gfgd";
	int entier;

	entier = ft_str_is_numeric(str);
	printf("%d", entier);
	return (0);
}
