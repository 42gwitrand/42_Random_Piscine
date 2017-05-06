/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/13 10:17:47 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/13 10:17:49 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_LIST_H
# define __FT_LIST_H

typedef struct	s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;
t_list			*ft_create_elem(void *data);
void			ft_list_push_back(t_list **begin_list, void *data);
#endif
