# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rivda-si <rivda-si@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/08 13:16:05 by rivda-si          #+#    #+#              #
#    Updated: 2024/04/08 13:16:10 by rivda-si         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Makefile

NAME = server client
SERVER = server
CLIENT = client
CC = gcc
NORM = norminette
CFLAGS = -Wall -Werror -Wextra -g 
RM = rm -rf

SRCS = $(wildcard *.c)
OBJS = $(SRCS:. .c=.o)

all : $(SERVER) $(CLIENT)

&(CLIENT) : client.o utils.o
	$(CC) $(CFLAGS) $^ -o $@

$(SERVER) : server.o utils.o
	$(cc) $(CFLAGS) $^ -o $@

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

norm :
	$(NORM) $(SRCS)

re : fclean all

.PHONY: clean fclean re all 
