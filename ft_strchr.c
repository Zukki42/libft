/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 13:32:57 by bavirgil          #+#    #+#             */
/*   Updated: 2025/10/15 17:58:30 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_strchr — searches for the first occurrence of a character in a string :D
// Scans the string 's' for the character 'c' and returns a pointer to it.
// If 'c' is '\0', it returns a pointer to the end of the string.
// If not found, it returns NULL.
// Great for finding letters, symbols, or trouble in your text :D

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (0);
}

// Example usage
// Compile with: cc ft_strchr.c -o test && ./test
// Finds the first occurrence of a character in a string :D
// int	main(void)
// {
// 	char str[] = "And I wonder , if you know , what it means!";
// 	char ch = 's';
// 	char *result = ft_strchr(str, ch);
// 	if (result)
// 	{
// 		printf("Character '%c' found at position: %ld\n", ch, result - str);
// 	}
// 	else
// 	{
// 		printf("Character '%c' not found!\n", ch);
// 	}
// 	return (0);
// }
