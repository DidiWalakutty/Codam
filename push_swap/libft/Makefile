NAME = libft.a

SRCS =	ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_strchr.c ft_strlen.c ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c \
		ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_bzero.c ft_memset.c ft_memcpy.c \
		ft_memmove.c ft_memchr.c ft_memcmp.c ft_calloc.c ft_strdup.c ft_substr.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_strjoin.c ft_strtrim.c \
		ft_putnbr_fd.c ft_split.c ft_strmapi.c ft_striteri.c ft_itoa.c

SRCS_B = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
		
OBJ = ${SRCS:.c=.o}

OBJ_B = ${SRCS_B:.c=.o}

CC = gcc

CFLAGS = -Wall -Werror -Wextra

RM = rm -f

all: ${NAME}

AR = ar -rcs

${NAME}: ${OBJ}
		${AR} ${NAME} ${OBJ}

bonus:	${NAME} $(OBJ_B)
		${AR} $< ${OBJ_B}
test:
		./${NAME}

clean:
		${RM} ${OBJ}

fclean: clean
		${RM} ${NAME}

re: 	fclean $(NAME)

.PHONY: all clean fclean re