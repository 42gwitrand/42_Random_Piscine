/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-04.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/17 18:53:40 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/17 18:53:46 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "function.h"

int		firstlast(int x, int z)
{
	int	b_x;

	b_x = x - 1;
	if (z == 1)
	{
		ft_putchar('A');
		if (x == 1)
			return (0);
		while (--b_x != 0 || b_x < 0)
			ft_putchar('B');
		ft_putchar('C');
		return (0);
	}
	if (z > 1)
	{
		ft_putchar('C');
		if (x == 1)
			return (0);
		while (--b_x != 0 || b_x < 0)
			ft_putchar('B');
		ft_putchar('A');
		return (0);
	}
	else
		return (0);
}

int		middle(int x)
{
	int	b_x;

	b_x = x - 2;
	ft_putchar('B');
	if (x == 1)
		return (0);
	while (b_x != 0 || b_x < 0)
	{
		ft_putchar(' ');
		b_x--;
	}
	ft_putchar('B');
	return (0);
}

int		colle(int x, int y)
{
	int min_y;
	int z;

	min_y = y - 2;
	z = 1;
	if (x <= 0 || y <= 0)
		return (0);
	firstlast(x, z);
	z++;
	ft_putchar('\n');
	while (min_y > 0)
	{
		middle(x);
		ft_putchar('\n');
		min_y--;
	}
	if (y > 1)
	{
		firstlast(x, z);
		ft_putchar('\n');
	}
	return (0);
}
