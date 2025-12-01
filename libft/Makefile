# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/23 21:12:52 by sgovinda          #+#    #+#              #
#    Updated: 2025/12/01 18:23:19 by sgovinda         ###   ########.fr        #
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
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c
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