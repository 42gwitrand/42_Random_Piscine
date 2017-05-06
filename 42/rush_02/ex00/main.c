/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 18:54:37 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/17 18:54:38 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.h"

int		ft_atoi(char *str)
{
	int i;
	int number;

	i = 0;
	number = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		number *= 10;
		number += ((int)str[i] - 48);
		i++;
	}
	return (number);
}

int		main(int argc, char **argv)
{
	int		x;
	int		y;
	int		argcuse;

	argcuse = argc;
	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[2]);
	colle(x, y);
	return (0);
}
