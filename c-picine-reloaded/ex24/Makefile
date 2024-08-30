NAME = libft.a
CC = cc
FLAGS = -Wall -Werror -Wextra
SRC = ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_strcmp.c ./srcs/ft_strlen.c ./srcs/ft_swap.c

all: $(NAME)
$(NAME):
	$(CC) $(FLAGS) -c $(SRC)
	ar -rcs $(NAME) ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
clean:
	rm -f ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
fclean: clean
	rm -f $(NAME)
re: fclean $(NAME)