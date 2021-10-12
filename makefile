NAME = libft.a
CC = gcc
FLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

SRC = ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_intlen.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strrev.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c 

BONUS = ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c


OBJ = $(SRC:.c=.o) 
OBJ_BONUS = $(BONUS:.c=.o) 

.c.o:
		${CC} ${FLAGS} -g -c $< -o ${<:.c=.o}


all: ${NAME}

${NAME}: ${OBJ}
			
			${AR} ${NAME} ${OBJ}
			echo 'Archive created, object files created'

bonus:	${OBJ} ${OBJ_BONUS}
			${AR} ${NAME} ${OBJ} ${OBJ_BONUS}
			echo 'Archive created with bonus, object files created'


clean:	
			${RM} ${OBJ} ${OBJ_BONUS}
			echo 'Object files cleaned'

fclean: clean
			${RM} ${NAME}
			echo 'Archive cleaned'

re: fclean all

.PHONY: all, clean, fclean, re, bonus
