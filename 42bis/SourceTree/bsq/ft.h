/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguyout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 18:08:33 by mguyout           #+#    #+#             */
/*   Updated: 2016/09/19 22:28:32 by mguyout          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>

typedef	struct		s_list
{
	int				x;
	int				y;
}					t_list;

void				ft_stdin(char **map);
void				ft_putchar(char c);
void				ft_putstr(char *str);

char				*ft_stdin_create_str(char *str);
char				*ft_get_char(char *str);
char				**ft_create_tab(char *str);
char				**ft_split_whitespaces(char *str);
#endif
