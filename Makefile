# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bavirgil <bavirgil@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/16 13:24:21 by bavirgil          #+#    #+#              #
#    Updated: 2025/07/23 21:04:36 by bavirgil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

# Library name
NAME = libft.a

# Source files
SRCS = ft_isalnum.c \
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
		ft_strjoin.c\
		ft_split.c\
		ft_substr.c \
		ft_itoa.c \
		ft_strmapi.c \
# make the last 2 at home for tonight :> 
		
# Object files
OBJS = $(SRCS:.c=.o)

# Default rule
all: $(NAME)

# Rule to create the library
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Rule to compile .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up object files
clean:
	rm -f $(OBJS)

# Clean up everything (object files and library)
fclean: clean
	rm -f $(NAME)

# Rebuild everything
re: fclean all

.PHONY: all clean fclean re bonus