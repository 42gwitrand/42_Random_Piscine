/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguyout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 18:13:18 by mguyout           #+#    #+#             */
/*   Updated: 2016/09/20 22:20:09 by mguyout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_stdin(char **map)
{
	char *str;
	char *c;

//	str = NULL;
	if ((str = ft_stdin_create_str(str)) == 0)
	{
		ft_putstr("map error\n");
		return ;
	}
	c = ft_get_char(str);
	if (ft_map_error(str, c) == 1)
	{
	//	map = ft_create_tab(str);
		//ft_bsq(map);
	//	ft_print_bsq();
		printf("OK");
	}
}
