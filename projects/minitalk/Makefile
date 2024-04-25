NAME = minitalk.a
SRC = client.c server.c ft_atoi.c
OBJ = $(SRC:.c=.o)
FLAG = -Wall -Wextra -Werror
RM = rm -fr

all: $(NAME) server client

$(NAME): $(OBJ) printf/libftprintf.a
	ar -rc $(NAME) $(OBJ)

server: server.o ft_atoi.o printf/libftprintf.a
	cc $(FLAG) -o server server.o ft_atoi.o printf/libftprintf.a

client: client.o ft_atoi.o printf/libftprintf.a
	cc $(FLAG) -o client client.o ft_atoi.o printf/libftprintf.a

%.o: %.c
	cc $(FLAG) -c $< -o $@

printf/libftprintf.a:
	make -C printf

clean:
	make -C printf clean
	$(RM) $(OBJ)

fclean: clean
	make -C printf fclean
	$(RM) $(NAME) server client

re: fclean all

.PHONY: all clean fclean re
