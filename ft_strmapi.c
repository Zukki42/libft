/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: bavirgil <bavirgil@student.42heilbronn.    +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2025/07/24 16:47:39 by bavirgil          #+#    #+#             */
/*   Updated: 2025/07/24 16:47:39 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_strmapi — applies a function to each character of a string and returns a new one :D
// Takes a string 's' and a function 'f' that modifies each character (with its index).
// The original string stays untouched — a pure and innocent transformation :D
// Returns a freshly malloc’d string with all the modified characters.

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *res;
	unsigned int i;

	if (!s || !f)
		return (NULL);
	res = malloc(ft_strlen(s) + 1);
	if (!res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

// Example usage
// Compile with: cc ft_strmapi.c ft_strlen.c -o test && ./test
// Creates a new string with each character transformed by a function :D
// char	make_upper(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	return (c);
// }
//
// int	main(void)
// {
// 	char *str = "make me uppercase!";
// 	char *result = ft_strmapi(str, make_upper);
// 	printf("%s\n", result);
// 	free(result);
// 	return (0);
// }
