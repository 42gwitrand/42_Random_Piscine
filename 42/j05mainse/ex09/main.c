/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 23:51:06 by tiskow            #+#    #+#             */
/*   Updated: 2016/09/05 23:51:07 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strlowcase(char *str);

int main(void)
{
	char str [] = "HELLO WORLD DUDE";
	char *req;

	req = ft_strlowcase(str);
	printf("%s", req);
	return (0);
}
