/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/05 16:31:24 by tiskow            #+#    #+#             */
/*   Updated: 2016/09/05 16:31:28 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int 	ft_atoi(char *str);

int     main(void)
{
    int nombre;
    char table [] = "-455";

    nombre = ft_atoi(table);
    printf("%d", nombre);
    return (0);
}