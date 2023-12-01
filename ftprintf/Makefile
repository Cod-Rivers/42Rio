# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 16:34:00 by rivda-si          #+#    #+#              #
#    Updated: 2023/11/29 16:38:49 by rivda-si         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile

NAME = printf.a

SRC = ft_putchar.c

CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:.c=.o)
RM = rm -rf

all:$(NAME)

$(NAME) :$(OBJ)
		ar rcs $(NAME) $(OBJ)
