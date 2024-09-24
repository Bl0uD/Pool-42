# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdupuis <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/23 13:28:13 by jdupuis           #+#    #+#              #
#    Updated: 2024/09/24 14:29:00 by jdupuis          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nom de l'exécutable
NAME = bsq

# Dossiers
SRCDIR = srcs/
INCDIR = includes/
OBJDIR = objs/

# Fichiers sources et objets
SRC_FILES = $(wildcard $(SRCDIR)*.c)
OBJ_FILES = $(patsubst $(SRCDIR)%.c, $(OBJDIR)%.o, $(SRC_FILES))

# Options du compilateur
CC = gcc
CFLAGS = -Wall -g -Wextra -Werror -I$(INCDIR)

# Règle par défaut
all: $(NAME)

# Compilation de l'exécutable
$(NAME): $(OBJ_FILES)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ_FILES) #-fsanitize=address -g

# Compilation des fichiers objets
$(OBJDIR)%.o: $(SRCDIR)%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Création du dossier obj s'il n'existe pas
$(OBJDIR):
	mkdir -p $(OBJDIR)

# Nettoyage des fichiers objets et de l'exécutable
clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

# Rebuild complet
re: fclean all

.PHONY: all clean fclean re
