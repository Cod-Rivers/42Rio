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

NAME = libftprintf.a

SRC =	ft_print_char.c\
	ft_printf.c\
	ft_putnbr_fd.c\
	ft_putstr_fd.c\
	ft_put_u.c\
	ft_base16.c\
	ft_printp.c
	


CC = cc
CFLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:.c=.o)
RM = rm -rf

all:$(NAME)

$(NAME) :$(OBJ)
		ar rcs $(NAME) $(OBJ)
		
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@
	
so:
	$(CC) -nostartfiles $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libftprintf.so $(OBJ)
	
clean:
	$(RM) $(OBJ)
	
fclean:clean
	$(RM) $(NAME)
	
re:fclean all

.PHONY: all clean fclean re
