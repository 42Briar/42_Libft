NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
AR = ar rcs
SRCDIR	= src
SRC = ${shell find ${SRCDIR} -name '*.c'}
OBJ = $(SRC:.c=.o)
RM = rm -f

all: ${NAME}

${NAME}: 
			@${CC} ${FLAGS} -c ${SRC}
			@${AR} ${NAME} ${OBJ}
			@echo 'Archive created, object files created'
clean:	
			@${RM} ${OBJ}
			@echo 'Object files cleaned'

fclean: clean
			@${RM} ${NAME}
			@echo 'Archive cleaned'

re: fclean all

.PHONY: all, clean, fclean, re