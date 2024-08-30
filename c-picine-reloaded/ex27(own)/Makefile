NAME = ft_display_file
CC = cc
FLAGS = -Wall -Werror -Wextra
SRC = ./ft_display_file.c ./ft_error_msg.c ./ft_many_arg.c ./ft_mis_arg.c ./ft_not_read.c ./ft_putchar.c ./ft_headers.h
all: $(NAME)
$(NAME):
	$(CC) $(FLAGS) -c $(SRC)
	ar -rcs $(NAME) ./ft_display_file.o ./ft_error_msg.o ./ft_many_arg.o ./ft_mis_arg.o ./ft_not_read.o ./ft_putchar.o
clean:
	rm -f ./ft_display_file.o ./ft_error_msg.o ./ft_many_arg.o ./ft_mis_arg.o ./ft_not_read.o ./ft_putchar.o ./ft_headers.h.gch
fclean: clean
	rm -f $(NAME)
re: fclean $(NAME)