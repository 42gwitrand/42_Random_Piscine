# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/09/18 15:18:55 by gwitrand          #+#    #+#              #
#    Updated: 2016/09/18 15:18:56 by gwitrand         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC	= gcc

RM	= rm -f

NAME	= eval_expr

SRCS	= main.c\
		eval_expr.c\
		do_op.c \
		library.c

OBJS	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean :	
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re : fclean all
