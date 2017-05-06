/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 18:47:23 by tiskow            #+#    #+#             */
/*   Updated: 2016/09/05 18:47:25 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char str [] = "My car is green";
	char to_find [] = "car";
	char *ret;

	ret = ft_strstr(str, to_find);
	printf("The substring is: %s\n", ret);
	return (0);
}
