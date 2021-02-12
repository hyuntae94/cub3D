# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyunkim <hyunkim@student.42.kr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/03 18:29:02 by jinbkim           #+#    #+#              #
#    Updated: 2021/02/10 07:16:31 by hyunkim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= cub3d
LIB		= libft
LIB.A	= libft/libft.a
LIB.H	= libft/libft.h
CUB		= src
CUB.A	= src/cub3d.a
CUB.H	= src/cub3d.h

RM		= rm -rf
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
MLX 	= -Lmlx -lmlx -framework OpenGL -framework AppKit

all 	: $(NAME)

clean	:
		$(RM) $(OBJS) *.gch *.out
		make clean -C $(LIB)
		make clean -C $(CUB)

fclean	: clean
		$(RM) $(NAME)
		make fclean -C $(LIB)
		make fclean -C $(CUB)

re		: fclean all

$(NAME) :
		make -C $(LIB)
		make -C $(CUB)
		$(CC) $(CFLAGS) $(MLX) $(LIB.A) $(LIB.H) $(CUB.A) $(CUB.H)
		mv a.out cub3d
