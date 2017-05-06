# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/17 18:53:05 by gwitrand          #+#    #+#              #
#    Updated: 2016/09/17 18:53:10 by gwitrand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

SRC = *.c

FLG = -Wall -Wextra -Werror

RMBINCOLLE = colle-00 colle-01 colle-02 colle-03 colle-04

all: $(NAME)

$(NAME):
	gcc -o colle-00 colle00.c main.c ft_putchar.c $(FLG)
	gcc -o colle-01 colle01.c main.c ft_putchar.c $(FLG)
	gcc -o colle-02 colle02.c main.c ft_putchar.c $(FLG)
	gcc -o colle-03 colle03.c main.c ft_putchar.c $(FLG)
	gcc -o colle-04 colle04.c main.c ft_putchar.c $(FLG)
	gcc -o $(NAME) colle2.c colle.c function.c $(FLG)

clean:
	rm -f $(RMBINCOLLE)

fclean: clean
	rm -f $(NAME)

re: fclean all

