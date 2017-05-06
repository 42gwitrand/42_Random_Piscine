/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 18:11:15 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/18 18:11:16 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "function.h"

char		*colle0(int x, int y)
{
	int		i;
	int		j;
	int		count;
	char	*ref;

	j = 1;
	count = 0;
	ref = malloc((sizeof(char) * (x * y) + y));
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if ((j == 1 && (i == 1 || i == x))
				|| (j == y && (i == 1 || (i == x && j != 1))))
				ref[count] = 'o';
			if ((j > 1 && j < y) && (i == 1 || i == x))
				ref[count] = '|';
			if ((j == 1 || j == y) && (i > 1 && i < x))
				ref[count] = '-';
			if ((j > 1 && j < y) && (i > 1 && i < x))
				ref[count] = ' ';
			i++;
			count++;
		}
		ref[count] = '\n';
		count++;
		j++;
	}
	return (ref);
}

char		*colle1(int x, int y)
{
	int		i;
	int		j;
	int		count;
	char	*ref;

	j = 1;
	count = 0;
	ref = malloc((sizeof(char) * (x * y) + y));
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if ((j == 1 && i == 1) || (j == y && j != 1 && i == x && i != 1))
				ref[count] = '/';
			if ((j == 1 && i == x && i != 1) || (j == y && j != 1 && i == 1))
				ref[count] = '\\';
			if (((j == 1 || j == y) && (i > 1 && i < x))
				|| ((j > 1 && j < y) && (i == 1 || i == x)))
				ref[count] = '*';
			if (((j > 1 && j < y) && (i > 1 && i < x)))
				ref[count] = ' ';
			i++;
			count++;
		}
		ref[count] = '\n';
		count++;
		j++;
	}
	return (ref);
}

char		*colle2(int x, int y)
{
	int		i;
	int		j;
	int		count;
	char	*ref;

	j = 1;
	count = 0;
	ref = malloc((sizeof(char) * (x * y) + y));
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if ((i == 1 || (i == x && i != 1)) && j == 1)
				ref[count] = 'A';
			if ((i == 1 || (i == x && i != 1)) && j == y && j != 1)
				ref[count] = 'C';
			if (((j == 1 || j == y) && (i > 1 && i < x))
				|| ((j > 1 && j < y) && (i == 1 || i == x)))
				ref[count] = 'B';
			if (((j > 1 && j < y) && (i > 1 && i < x)))
				ref[count] = ' ';
			i++;
			count++;
		}
		ref[count] = '\n';
		count++;
		j++;
	}
	return (ref);
}

char		*colle3(int x, int y)
{
	int		i;
	int		j;
	int		count;
	char	*ref;

	j = 1;
	count = 0;
	ref = malloc((sizeof(char) * (x * y) + y));
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if ((j == 1 || j == y) && i == 1)
				ref[count] = 'A';
			if ((j == 1 || j == y) && i == x && x != 1)
				ref[count] = 'C';
			if (((j == 1 || j == y) && (i > 1 && i < x))
				|| ((j > 1 && j < y) && (i == 1 || i == x)))
				ref[count] = 'B';
			if (((j > 1 && j < y) && (i > 1 && i < x)))
				ref[count] = ' ';
			i++;
			count++;
		}
		ref[count] = '\n';
		count++;
		j++;
	}
	return (ref);
}

char		*colle4(int x, int y)
{
	int		i;
	int		j;
	int		count;
	char	*ref;

	j = 1;
	count = 0;
	ref = malloc((sizeof(char) * (x * y) + y));
	while (j <= y)
	{
		i = 1;
		while (i <= x)
		{
			if ((j == 1 && i == 1) || (j == y && j != 1 && i == x && i != 1))
				ref[count] = 'A';
			if ((j == 1 && i == x && i != 1) || (j == y && j != 1 && i == 1))
				ref[count] = 'C';
			if (((j == 1 || j == y) && (i > 1 && i < x))
				|| ((j > 1 && j < y) && (i == 1 || i == x)))
				ref[count] = 'B';
			if (((j > 1 && j < y) && (i > 1 && i < x)))
				ref[count] = ' ';
			i++;
			count++;
		}
		ref[count] = '\n';
		count++;
		j++;
	}
	return (ref);
}
