NAME = libft.a
INCLUDE = includes

CC = gcc
FLAGS = -Wall -Wextra -Werror -I $(INCLUDE)

SOURCES = \
	./srcs/ft_putchar.c \
	./srcs/ft_putstr.c \
	./srcs/ft_strcmp.c \
	./srcs/ft_strlen.c \
	./srcs/ft_swap.c

OBJECTS = $(SOURCES:.c=.o)

%.o : %.c
	$(CC) $(FLAGS) -o $@ -c $^

$(NAME) : $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

.PHONY : all
all : $(NAME)

.PHONY : clean
clean :
	rm -f $(OBJECTS)

.PHONY : fclean
fclean : clean
	rm -f $(NAME)

.PHONY : re
re : fclean all
