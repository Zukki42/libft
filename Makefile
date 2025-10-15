# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bavirgil <bavirgil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/16 13:24:21 by bavirgil          #+#    #+#              #
#    Updated: 2025/10/15 18:08:50 by bavirgil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
#                                  LIBFT                                       #
# **************************************************************************** #
# A small utility library implementing common C functions.
# This Makefile compiles all .c files into object files and archives them
# into a static library called libft.a
# **************************************************************************** #

# Compiler setup
CC		= cc
CFLAGS	= -Wall -Wextra -Werror

# Output library name
NAME	= libft.a

# Source files
SRCS	= ft_isalnum.c \
		  ft_isalpha.c \
		  ft_isascii.c \
		  ft_isdigit.c \
		  ft_isprint.c \
		  ft_toupper.c \
		  ft_tolower.c \
		  ft_strncmp.c \
		  ft_strlen.c \
		  ft_strlcat.c \
		  ft_bzero.c \
		  ft_memset.c \
		  ft_memcpy.c \
		  ft_memmove.c \
		  ft_atoi.c \
		  ft_strlcpy.c \
		  ft_strchr.c \
		  ft_strrchr.c \
		  ft_calloc.c \
		  ft_strdup.c \
		  ft_memchr.c \
		  ft_memcmp.c \
		  ft_strnstr.c \
		  ft_putnbr_fd.c \
		  ft_putendl_fd.c \
		  ft_putstr_fd.c \
		  ft_putchar_fd.c \
		  ft_striteri.c \
		  ft_strtrim.c \
		  ft_strjoin.c \
		  ft_split.c \
		  ft_substr.c \
		  ft_itoa.c \
		  ft_strmapi.c

# Object files generated from the sources
OBJS	= $(SRCS:.c=.o)

# Default target — build the library
all: $(NAME)

# Create the static library (libft.a) from compiled object files
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	@echo "✅ Library $(NAME) created successfully!"

# Compile .c files into .o object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled: $<"

# Remove all compiled object files
clean:
	rm -f $(OBJS)
	@echo "🧹 Object files cleaned up."

# Remove all compiled files including the library
fclean: clean
	rm -f $(NAME)
	@echo "🗑️  Removed $(NAME)."

# Fully rebuild the project from scratch
re: fclean all

# Prevent conflicts with file names
.PHONY: all clean fclean re
