# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/18 15:18:55 by gwitrand          #+#    #+#              #
#    Updated: 2016/09/18 21:13:24 by gwitrand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= gcc

RM	= rm -f

NAME	= eval_expr

SRCS	= main.c\
		eval_expr.c\
		do_op.c \
		library.c
FLAG = -Wall -Wextra -Werror

OBJS	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAG) $(OBJS) -o $(NAME)

clean :	
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re : fclean all
