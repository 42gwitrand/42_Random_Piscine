/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 15:13:30 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/18 15:13:32 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MAIN_H
# define __MAIN_H

void		ft_putchar(char c);
void		ft_putnbr(int nbr);
int			ft_strlen(char *str);
int			eval_expr(char *str);
int			do_op(int lhs, int rhs, char op);
char		*suppr_spaces(char *str);
int			eval_expr_0(char **ps);
int			eval_expr_1(char **ps);
int			eval_expr(char *str);

#endif
