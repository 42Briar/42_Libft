NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
AR = ar rcs
SRC = ${shell find src -name *.c}
OBJ = $(SRCS:.c=.o)
RM = rm -f


all: ${NAME}

${NAME}: 
			@${CC} ${FLAGS} -c ${SRC}
			@${AR} ${NAME} ${OBJ}

clean:	${RM} ${OBJ}

fclean: clean
			@${RM} ${NAME}

re: fclean all


.PHONY: all, clean, fclean, re