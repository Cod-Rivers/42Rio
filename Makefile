# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/21 12:03:21 by rivda-si          #+#    #+#              #
#    Updated: 2023/11/21 12:03:26 by rivda-si         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile

NAME = libft.a

SRC =	ft_atoi.c \
	ft_isalnum.c \
	ft_isdigit.c \
	ft_memcmp.c \
	ft_memset.c \
	ft_strlcat.c \
	ft_strncmp.c \
	ft_tolower.c \
	ft_bzero.c \
	ft_isalpha.c \
	ft_isprint.c \
	ft_memcpy.c \
	ft_strchr.c  \
	ft_strlcpy.c \
	ft_strnstr.c \
	ft_toupper.c \
	ft_isascii.c \
	ft_memchr.c \
	ft_memmove.c \
	ft_strlen.c \
	ft_strrchr.c \
	ft_substr.c \
	ft_putchar_fd.c \
	ft_strjoin.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_strtrim.c \
	ft_split.c \
	ft_putstr_fd.c \
	ft_putnbr_fd.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putendl_fd.c
	  
CC = cc
CFLAGS = -Wall -Wextra -Werror 
OBJ = $(SRC:.c=.o)
RM = rm -rf

all:$(NAME)

$(NAME):$(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@
	
so:
	$(CC) -nostartfiles $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:clean
	$(RM) $(NAME)

re:fclean all

.PHONY:	all clean fclean re
