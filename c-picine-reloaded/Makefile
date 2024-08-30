SRC_DIR = ./srcs/
SRC         = ${SRC_DIR}ft_display_file.c ${SRC_DIR}ft_error_msg.c ${SRC_DIR}ft_many_arg.c ${SRC_DIR}ft_mis_arg.c ${SRC_DIR}ft_not_read.c ${SRC_DIR}ft_putchar.c
OBJS        = ${SRC:.c=.o}
HEAD        = ./includes/
NAME        = libft.a
AR          = ar rcs
RM          = rm -f
GCC         = gcc
CFLAGS      = -Wall -Wextra -Werror
all:        ${NAME}
.c.o:
			${GCC} ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}
${NAME}:    ${OBJS}
			${AR} ${NAME} ${OBJS}
clean:
			rm -f ${OBJS}
fclean:     clean
			rm -f ${NAME}
re:         fclean all
.PHONY:     all clean fclean re