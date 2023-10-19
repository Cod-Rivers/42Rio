# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rivda-si <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 19:00:36 by rivda-si          #+#    #+#              #
#    Updated: 2023/10/19 15:38:06 by rivda-si         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile

NAME=printy

C_SOURCE=$(wildcard *.c)
	

H_SOURCE=$(wildcard *.h)

OBJ=$(C_SOURCE: .c=.o)

CC=cc

CC_FLAGS=-c      \
         -W      \
         -Wall   \
         -Wextra \
         -Werror 

all: $(NAME)
$(NAME):$(OBJ)
	$(CC) -o $@ $^

%.o: %.c %.h
	$(CC) -o $@ $< $(CC_FLAGS)

main.o: main.c $(H_SOURCE)
	$(CC) -o $@ $< $(CC_FLAGS)

clean:
	rm -rf *.o $(NAME) *~
