/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/18 15:13:00 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/18 15:13:03 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			do_op(int lhs, int rhs, char op)
{
	if (op == '+')
		return (lhs + rhs);
	else if (op == '-')
		return (lhs - rhs);
	else if (op == '*')
		return (lhs * rhs);
	else if (op == '/')
		return (lhs / rhs);
	else if (op == '%')
		return (lhs % rhs);
	else
		return (0);
}
