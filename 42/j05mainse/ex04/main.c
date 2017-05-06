/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 18:30:59 by tiskow            #+#    #+#             */
/*   Updated: 2016/09/05 18:31:01 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char src [] = "Hello World";
	char dst [255];
	unsigned int n = 15;
	char *ret;

	ret = ft_strncpy(dst, src, n);
	printf("The string: %s\n", ret);
	return (0);
}