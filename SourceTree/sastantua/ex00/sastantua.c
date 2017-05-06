/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/04 23:29:10 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/17 19:44:28 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

int		calc_base(int size)
{
	int etage;
	int largeur;
	int etage_step;

	etage = 1;
	largeur = 1;
	etage_step = 4;
	while (etage <= size)
	{
		largeur += 2 * (2 + etage);
		etage++;
		largeur += etage_step;
		if (etage % 2 && etage < size)
			etage_step += 2;
	}
	largeur -= etage_step;
	return (largeur);
}

void	put_line(int space)
{
	int pos;

	pos = 0;
	while (pos < space)
	{
		ft_putchar(' ');
		pos++;
	}
}

void	put_blocks(int size, int etage, int largeur, int step)
{
	int porte;
	int pos;

	porte = 1 + 2 * ((etage - 1) / 2);
	pos = 0;
	while (pos < largeur)
	{
		if (pos == 0)
			ft_putchar('/');
		else if (pos == largeur - 1)
			ft_putchar('\\');
		else
		{
			if (etage == size && pos >= (largeur - porte) / 2
					&& pos < (largeur + porte) / 2 && 2 + etage - step <= porte)
				if (porte >= 5 && step == 2 + etage - porte / 2 - 1
						&& pos == (largeur + porte) / 2 - 2)
					ft_putchar('$');
				else
					ft_putchar('|');
			else
				ft_putchar('*');
		}
		pos++;
	}
}

void	sastantua(int size)
{
	int	etage;
	int	height;
	int	step;
	int	largeur;

	if (size < 1)
		return ;
	etage = 1;
	largeur = 1;
	while (etage <= size)
	{
		height = 2 + etage;
		step = 0;
		while (step < height)
		{
			largeur += 2;
			put_line((calc_base(size) - largeur) / 2);
			put_blocks(size, etage, largeur, step);
			ft_putchar('\n');
			step++;
		}
		etage++;
		largeur += 4 + 2 * ((etage - 2) / 2);
	}
}

int main(void)
{
	sastantua(2);
	return (0);
}
