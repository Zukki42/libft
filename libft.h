/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:24:05 by bavirgil          #+#    #+#             */
/*   Updated: 2025/07/16 13:24:05 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>

/* Character check functions (return int) */
int		ft_isalpha(int c); // checks if character is a letter
int		ft_isdigit(int c); // checks if character is a digit
int		ft_isalnum(int c); // checks if character is alphanumeric
int		ft_isascii(int c); // checks if character is ASCII
int		ft_isprint(int c); // checks if character is printable
int		ft_toupper(int c); // converts lowercase to uppercase
int		ft_tolower(int c); // converts uppercase to lowercase
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n); // compares memory
int		ft_atoi(const char *str); // converts string to int

/* size_t return functions */
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

/* Memory and string pointer return functions */
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *hay, const char *ndl, size_t len);

#endif