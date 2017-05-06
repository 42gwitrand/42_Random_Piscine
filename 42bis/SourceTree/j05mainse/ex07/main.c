/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 22:51:06 by tiskow            #+#    #+#             */
/*   Updated: 2016/09/05 22:51:07 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char str [] = "Hello World dude";
	char str2 [] = "Hello d ";
	int n = 15;
	int entier;

	entier = ft_strncmp(str, str2, n);
	printf("%d", entier);
	return (0);
}
