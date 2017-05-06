/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 23:45:26 by tiskow            #+#    #+#             */
/*   Updated: 2016/09/05 23:45:29 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

int		main(void)
{
	char str [] = "hello world dude";
	char *req;

	req = ft_strupcase(str);
	printf("%s", req);
	return (0);
}
