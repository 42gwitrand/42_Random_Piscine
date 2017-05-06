/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 17:44:14 by tiskow            #+#    #+#             */
/*   Updated: 2016/09/05 17:44:18 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char dst[255];
	char src[] = "test test salut";
	ft_strcpy(dst, src);
	printf("src = %s, ", src);
	printf("dst = %s ", dst);
	return (0);
}
