/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguyout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 18:02:04 by mguyout           #+#    #+#             */
/*   Updated: 2016/09/20 22:23:28 by mguyout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int argc, char **argv)
{
	char	**map;
	char	buf[1 + 1];
	int		i;
	int 	fd;

//	map = NULL;
	i = 1;
	if (argc == 1)
		ft_stdin(map);
/*
	else
	{
		c = ft_get_char(argv[i]);
		while (i < argc)
		{
			if (ft_map_error(argv[i], c) == 1)
			{
				map = ft_create_tab(argv[i]);
			//	ft_bsq(map);
			//	ft_print_bsq();
			}
			i++;
		}
	} */
	return (0);
}
