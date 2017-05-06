/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evlad <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/03 14:24:15 by evlad             #+#    #+#             */
/*   Updated: 2016/09/03 15:40:35 by evlad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		colle(int x, int y);

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
	colle( x, y);
	return (0);
}
