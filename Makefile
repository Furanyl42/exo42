# Nom de l'exécutable final
NAME = test

# Fichiers sources C à compiler
SRCS = ft_strdup.c ft_putstr.c ft_strlen.c ft_div_mod.c ft_swap.c ft_ft.c ft_putchar.c main.c

# Compilateur et flags obligatoires 42
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Règle principale (par défaut)
all: $(NAME)

# Compilation du programme
$(NAME):
	$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

# Règle pour nettoyer l'exécutable
fclean:
	rm -f $(NAME)

# Règle pour nettoyer puis tout recompiler
re: fclean all

.PHONY: all fclean re
