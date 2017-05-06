# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/18 18:38:53 by gwitrand          #+#    #+#              #
#    Updated: 2016/09/20 16:44:06 by mguyout          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRC = *.c

FLG = -Wall -Wextra -Werror

FICHIERSO = ft_bsq.o \
			ft_create_tab.o \
			ft_get_char.o \
			ft_map_error.o \
			ft_print_bsq.o \
			ft_putchar.o \
			ft_putstr.o \
			ft_split_whitespaces.o \
			ft_stdin.o \
			ft_stdin_create_str.o \
			main.o \
			ft_atoi.o \

FICHIERS =	ft_create_tab.c \
			ft_get_char.c \
			ft_map_error.c \
			ft_putchar.c \
			ft_putstr.c \
			ft_split_whitespaces.c \
			ft_stdin.c \
			ft_stdin_create_str.c \
			main.c \
			ft_atoi.c \

all: $(NAME)

$(NAME):
	gcc $(FLG) -o $(NAME) $(FICHIERS)

clean:
	rm -f $(FICHIERSO)

fclean: clean
	rm -f $(NAME)

re: fclean all
