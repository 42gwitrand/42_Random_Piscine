/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 23:55:04 by tiskow            #+#    #+#             */
/*   Updated: 2016/09/05 23:55:08 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strcapitalize(char *str);

int main(void)
{
	char str [] = "salut, comment tu vas ? 42moTs quaraNte-deux; cinquante+et+un";
	char *req;

	req = ft_strcapitalize(str);
	printf("%s", req);
	return (0);
}

