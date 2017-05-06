/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 11:53:03 by tiskow            #+#    #+#             */
/*   Updated: 2016/09/06 11:53:04 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, int nb);

int		main(void)
{
	char dst[20] = "hello ";
	char src[] = "gfdfdgfdgfd";
	int nb = 2;
	ft_strncat(dst, src, nb);
	printf("src = %s, ", src);
	printf("dst = %s ", dst);
	return (0);
}
