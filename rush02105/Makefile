NAME = rush-2
SRCS	=	main.c lib.c array.c validate.c dict.c
OBJS	=	${SRCS:.c=.o}
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
NAME	=	rush-02

.c.o:
	${CC} ${CFLAGS} -c $<

all:	${OBJS}
	${CC} ${CFLAGS} -o ${NAME} ${OBJS}

${NAME}:	${OBJS}

clean:
	rm -f ${OBJS}

fclean:	clean
	rm -f ${NAME}

re:	fclean	all
