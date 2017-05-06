# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/18 18:38:53 by gwitrand          #+#    #+#              #
#    Updated: 2016/09/18 18:38:54 by gwitrand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRC = *.c

FLG = -Wall -Wextra -Werror

POINTO = yolo

all: $(NAME)

$(NAME):
	gcc $(FLG) -o $(NAME) FICHIERS

clean:
	rm -f $(POINTO)

fclean: clean
	rm -f $(NAME)

re: fclean all

