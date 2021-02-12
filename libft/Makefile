# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyunkim <hyunkim@student.42.kr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/10 18:11:27 by jinbkim           #+#    #+#              #
#    Updated: 2021/02/10 06:40:57 by hyunkim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC 	= $(wildcard *.c)
OBJS	= $(SRC:.c=.o)

NAME	= libft.a
RM		= rm -f
LIB		= ar rc
CC		= gcc
# CFLAGS	= -Wall -Wextra -Werror -g -fsanitize=address
CFLAGS	= -Wall -Wextra -Werror
all 	: $(NAME)

clean	:
		$(RM) $(OBJS) *.gch *.out

fclean	: clean
		$(RM) $(NAME)

re		: fclean all

$(NAME) : $(OBJS)
		$(LIB) $(NAME) $(OBJS)
