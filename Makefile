NAME = libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = $(wildcard *.c)

OBJS =	${SRCS:.c=.o}

INCS = -I .

BONUS_OBJS = ${BONUS:.c=.o}

AR = ar rcs

.o:.c
	${CC} ${CFLAGS} ${INCS} -c $<

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

all:	${NAME}

bonus:	${OBJS} ${BONUS_OBJS}
			${AR} ${NAME} ${OBJS} ${BONUS_OBJS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re