NAME = server client
SERVER = server
CLIENT = client
CC = gcc
NORM = norminette
CFLAGS = -Wall -WError -Wextra -g 
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