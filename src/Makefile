# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyunkim <hyunkim@student.42.kr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/05 16:43:09 by hyunkim           #+#    #+#              #
#    Updated: 2021/02/10 06:49:21 by hyunkim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		= $(wildcard *.c)
OBJS	= $(SRC:.c=.o)

NAME	= cub3d.a
RM		= rm -f
LIB		= ar rc
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
all		: $(NAME)

clean	:
		$(RM) $(OBJS) *.gch *.out

fclean	: clean
		$(RM) $(NAME)

re		: fclean all

$(NAME)	: $(OBJS)
		$(LIB) $(NAME) $(OBJS)
