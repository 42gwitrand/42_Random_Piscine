/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguyout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 18:13:18 by mguyout           #+#    #+#             */
/*   Updated: 2016/09/19 22:44:39 by mguyout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_stdin(char **map)
{
	char *str;
	char c;

	str = ft_stdin_create_str(str);
	c = ft_get_char(str);
	if (ft_map_error(str, c) == 1)
	{
		map = ft_create_tab(map);
		ft_bsq(map);
		ft_print_bsq();
	}
}
