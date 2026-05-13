# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/21 17:34:30 by sgovinda          #+#    #+#              #
#    Updated: 2026/05/13 19:31:24 by sgovinda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Programme name
NAME = libftprintf.a

# Compiler and flags, -I . tells CC to look in the root folder for the header.
CC = cc
CFLAGS = -Wall -Wextra -Werror -I .

# Source and object files
SRC = src/ft_printf.c \
	src/handle_char.c \
	src/handle_string.c \
	src/handle_nbr.c \
	src/handle_unsigned_int.c \
	src/handle_hexadecimal.c \
	src/handle_pointer.c \
	src/utils.c
OBJ = $(SRC:%.c=%.o)

# Default rule to build entire library if needed, otherwise do nothing.
all: $(NAME)

# Create library that contains all compiled functions.
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Compile C files into object files.
%.o: %.c ft_printf.h utils.h
	$(CC) $(CFLAGS) -c $< -o $@

# Remove object files.
clean:
	rm -f $(OBJ)

# Remove object files and the final library.
fclean:
	rm -f $(NAME) $(OBJ)

# Runs fclean and the rebuilds entire library.
re: fclean all

.PHONY: all clean fclean re