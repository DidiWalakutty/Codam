# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: diwalaku <diwalaku@student.42.fr>            +#+                      #
#                                                    +#+                       #
#    Created: 2023/05/18 17:39:35 by diwalaku      #+#    #+#                  #
#    Updated: 2023/06/23 20:27:40 by diwalaku      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = 		push_swap

LIBFT = 	./libft/libft.a
LIBFT_FLAG = -I libft

SRCS =	main.c stacks_and_nodes.c error.c parsing.c sorting_small.c \
		sorting_radix.c op_push.c op_rotate.c op_rev_rotate.c op_swap.c \


OBJ = ${SRCS:.c=.o}

CC = gcc

CFLAGS = -Wall -Werror -Wextra

all: ${NAME}

${NAME}: ${OBJ} ${LIBFT}
	${CC} -o $@ $^

%.o: %.c
	${CC} ${CFLAGS} -c -o $@ ${LIBFT_FLAG} $^
	
${LIBFT}:
	${MAKE} -C libft

${PRINTF}:
	${MAKE} -C ft_printf

clean:
		${RM} ${OBJ}
		${MAKE} -C libft clean

fclean: clean
		${RM} ${NAME}
		${MAKE} -C libft fclean

re:		fclean ${NAME}

.PHONY: all clean fclean re