/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comparetable.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 18:38:03 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/11 18:38:08 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	printerreur(void);
void	affichage(int **grille);

int		checkzero(int **grille)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		j = 0;
		while (grille[i][j] != '\0')
		{
			j++;
		}
		if (j != 9)
			return (1);
		i++;
	}
	return (0);
}

int		comparetable(int **grille, int argc, char **argv, int **grillebis)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i++][j] != '\0')
		{
			if (grille[i - 1][j] == grillebis[i - 1][j])
				j++;
			else
			{
				printerreur();
				return (0);
			}
		}
	}
	if (checkzero(grille) > 0)
	{
		printerreur();
		return (0);
	}
	affichage(grille);
	return (0);
}
