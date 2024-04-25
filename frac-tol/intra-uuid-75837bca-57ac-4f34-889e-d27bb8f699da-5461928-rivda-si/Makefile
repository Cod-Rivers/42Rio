# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rivda-si <rivda-si@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/23 19:45:14 by rivda-si          #+#    #+#              #
#    Updated: 2024/04/23 19:45:17 by rivda-si         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol

CC = cc

RM = rm -fr

FLAG = -Wall -Wextra -Werror

MLX = -Lminilibx-linux -lmlx_Linux -lX11 -lXext

SRC = fractol.c \
		events.c \
		init.c \
		math.c \
		render.c \
		string.c

OBJS = $(SRC:.c=.o)

all: $(NAME)

.c.o:
	$(CC) $(FLAG) -c $< -o $@

$(NAME) : $(OBJS) minilibx-linux/libmlx.a
	$(CC) $(FLAG) $(OBJS) ${MLX} minilibx-linux/libmlx.a -o $(NAME)

minilibx-linux/libmlx.a:
	make -C minilibx-linux/

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
