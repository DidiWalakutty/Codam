NAME = libftprintf.a

HEADER = ft_printf.h

SRC = 	ft_printf.c print_char.c print_str.c print_nbr.c \
		print_uns_dec.c print_lowerhex.c print_upperhex.c \
		print_pointer.c

OBJ = ${SRC:.c=.o}

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

all: ${NAME}

AR = ar -rcs

${NAME}: ${OBJ}
		${AR} ${NAME} ${OBJ}

clean:
		${RM} ${OBJ}

fclean: clean
		${RM} ${NAME}

re:		fclean ${NAME}

.PHONY: all clean fclean re