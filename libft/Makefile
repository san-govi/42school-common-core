# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/23 21:12:52 by sgovinda          #+#    #+#              #
#    Updated: 2025/11/29 20:47:13 by sgovinda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Programme name
NAME = libft.a 

# Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Source and object files
SRC = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c
OBJ = $(SRC:%.c=%.o)

# Default rule to build entire library if needed, otherwise do nothing.
all: $(NAME)

# Create library that contains all compiled functions.
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Compile C files into object files.
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

# Remove object files.
clean:
	rm -f $(OBJ)

# Remove object files and the final library.
fclean: clean
	rm -f $(NAME)

# Runs fclean and then rebuilds entire library.
re: fclean all 