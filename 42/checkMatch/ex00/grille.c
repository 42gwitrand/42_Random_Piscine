/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mkgrille.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/11 17:47:36 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/11 17:47:37 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		mkgrille(int **grille, int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		grille[i - 1] = (int*)malloc(sizeof(int) * 9);
		j = 0;
		while (argv[i][j] != '\0')
		{
			grille[i - 1][j] = (argv[i][j] - '0');
			if (grille[i - 1][j] == -2)
				grille[i - 1][j] = 0;
			j++;
		}
		i++;
	}
	return (**grille);
}
