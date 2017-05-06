/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mguyout <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 18:08:33 by mguyout           #+#    #+#             */
/*   Updated: 2016/09/20 22:44:15 by mguyout          ###   ########.fr       */
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

t_list				ft_bsq(char **map);

char				*ft_strcharcat(char *src, char c);
char				*ft_malloc(char	*str, char *file, int i);
char				*ft_stdin_create_str(char *str);
char				*ft_get_char(char *str);
char				**ft_create_tab(char *str);
char				**ft_split_whitespaces(char *str);

int					ft_map_error(char *file, char *c);
int					ft_atoi(char *str);
int					ft_atoinbr(char *str);
#endif
