# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/22 15:53:58 by jdupuis           #+#    #+#              #
#    Updated: 2024/09/22 17:15:04 by jdupuis          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME = exec

# SRCDIR = srcs
# INCDIR = includes
# CC = gcc
# CFLAGS = -Wall -Wextra -Werror
# MY_SOURCES = libft.a
# MY_OBJECTS = $(MY_SOURCES:.c=.o)

# all: $(NAME)

# $(NAME): $(MY_OBJECTS)
# 	$(CC) $(CFLAGS) -o $(NAME) $(MY_OBJECTS)

# $(OBJDIR)%.o: $(SRCDIR)%.c
# 	$(CC) $(CFLAGS) -c $< -o $@

# clean:
# 	rm -f $(MY_OBJECTS)
# 	rm -f $(OBJDIR)

# fclean: clean
# 	rm -f $(NAME)

# re: fclean all

# .PHONY:
# Nom de l'exécutable final
NAME = exec

# Répertoires
SRCDIR = srcs/
INCDIR = includes/
OBJDIR = objs/
LIBDIR = lib/
LIBFT = libft.a

# Compilation
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I $(INCDIR)

# Fichiers sources et objets
SRC_FILES = $(wildcard $(SRCDIR)*.c)
OBJ_FILES = $(patsubst $(SRCDIR)%.c, $(OBJDIR)%.o, $(SRC_FILES))

# Cibles principales
all: $(LIBDIR)$(LIBFT) $(NAME)

# Compilation de l'exécutable principal
$(NAME): $(OBJ_FILES) $(LIBDIR)$(LIBFT)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ_FILES) -L$(LIBDIR) -lft

# Compilation des fichiers objets à partir des fichiers sources
$(OBJDIR)%.o: $(SRCDIR)%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Création du répertoire d'objets s'il n'existe pas
$(OBJDIR):
	mkdir -p $(OBJDIR)

# Compilation de la librairie ft.a
$(LIBDIR)$(LIBFT): $(wildcard $(INCDIR)*.c) | $(LIBDIR)
	$(CC) $(CFLAGS) -c $(wildcard $(INCDIR)*.c)
	ar rcs $(LIBDIR)$(LIBFT) *.o
	rm -f *.o

# Création du répertoire de la librairie s'il n'existe pas
$(LIBDIR):
	mkdir -p $(LIBDIR)

# Nettoyage des fichiers objets
clean:
	rm -f $(OBJ_FILES)
	rm -f $(LIBDIR)$(LIBFT)

# Nettoyage complet (y compris l'exécutable)
fclean: clean
	rm -f $(NAME)
	rm -rf $(OBJDIR)
	rm -rf $(LIBDIR)

# Recompilation complète
re: fclean all

.PHONY: all clean fclean re
