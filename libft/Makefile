# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgovinda <sgovinda@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/23 21:12:52 by sgovinda          #+#    #+#              #
#    Updated: 2025/12/01 23:26:35 by sgovinda         ###   ########.fr        #
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
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c
OBJ = $(SRC:%.c=%.o)
BONUS_SRC = ft_lstnew.c \
			ft_lstadd_front.c
BONUS_OBJ = $(BONUS_SRC:%.c=%.o)

# Default rule to build entire library if needed, otherwise do nothing.
all: $(NAME)

# Create library that contains all compiled functions.
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Bonus rule to add bonus functions to library.
bonus: $(BONUS_OBJ)
	ar rcs $(NAME) $(BONUS_OBJ)

# Compile C files into object files.
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@
	
# Remove object files.
clean:
	rm -f $(OBJ) $(BONUS_OBJ)

# Remove object files and the final library.
fclean: clean
	rm -f $(NAME)

# Runs fclean and then rebuilds entire library.
re: fclean all

