/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/06 11:00:43 by tiskow            #+#    #+#             */
/*   Updated: 2016/09/06 11:00:46 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

int		main(void)
{
	char dst[] = "hello ";
	char src[] = "gfdds";
	strcat(dst, src);
	printf("src = %s, ", src);
	printf("dst = %s ", dst);
	return (0);
}
