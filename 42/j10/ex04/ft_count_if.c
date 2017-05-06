/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/12 15:00:37 by gwitrand          #+#    #+#             */
/*   Updated: 2016/09/14 10:30:10 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (tab[i] != '\0' || tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			j++;
		i++;
	}
	return (j);
}