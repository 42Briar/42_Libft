NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
AR = ar rcs
SRC = ${shell find . -name '*.c'}
OBJ = $(SRC:.c=.o)
RM = rm -f
GREEN = 

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
			@echo 'Object filed cleaned, archive cleaned'

re: fclean all


.PHONY: all, clean, fclean, re