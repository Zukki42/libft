#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

/* Character check functions (return int) */
int		ft_isalpha(int c); // checks if character is a letter
int		ft_isdigit(int c); // checks if character is a digit
int		ft_isalnum(int c); // checks if character is alphanumeric
int		ft_isascii(int c); // checks if character is ASCII
int		ft_isprint(int c); // checks if character is printable
int		ft_toupper(int c); // converts lowercase to uppercase
int		ft_tolower(int c); // converts uppercase to lowercase
int		ft_strncmp(const char *s1, const char *s2, size_t n); // compares strings
int		ft_memcmp(const void *s1, const void *s2, size_t n); // compares memory
int		ft_atoi(const char *str); // converts string to int

/* size_t return functions */
size_t	ft_strlen(const char *s); // returns length of string
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize); // copies string
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize); // appends string

/* Memory and string pointer return functions */
void	*ft_memset(void *b, int c, size_t len); // fills memory with byte
void	ft_bzero(void *s, size_t n); // fills memory with zeroes
void	*ft_memcpy(void *dst, const void *src, size_t n); // copies memory
void	*ft_memmove(void *dst, const void *src, size_t len); // moves memory
void	*ft_memchr(const void *s, int c, size_t n); // locates byte in memory
char	*ft_strchr(const char *s, int c); // finds char in string (first)
char	*ft_strrchr(const char *s, int c); // finds char in string (last)
char	*ft_strnstr(const char *hay, const char *ndl, size_t len); // finds substr

/* Malloc-based functions */
void	*ft_calloc(size_t count, size_t size); // allocates zeroed memory
char	*ft_strdup(const char *s1); // duplicates string using malloc

#endif