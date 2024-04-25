NAME = libftprintf.a

CC = cc

RM = rm -fr

FLAG = -Wall -Wextra -Werror

SRC =				ft_printstr.c ft_printchar.c ft_printf.c \
					ft_printxxp.c ft_strlen.c ft_printdiu.c ft_printpointer.c

OBJS = $(SRC:%.c=%.o)

all: $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAG) -c $(SRC)
	ar -rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
