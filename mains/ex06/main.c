/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 22:34:43 by tiskow            #+#    #+#             */
/*   Updated: 2016/09/05 22:34:44 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char str [] = "gfd";
	char str2 [] = "test";
	int entier;

	entier = ft_strcmp(str, str2);
	printf("%d", entier);
	return (0);
}
