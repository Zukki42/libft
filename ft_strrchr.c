/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 14:15:14 by bavirgil          #+#    #+#             */
/*   Updated: 2025/10/15 18:03:34 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_strrchr — finds the *last* occurrence of a character in a string :D
// Scans the string 's' for the character 'c' and returns a pointer to its last appearance.
// If 'c' is '\0', it returns a pointer to the end of the string.
// Returns NULL if the character isn’t found.
// Basically ft_strchr’s nostalgic sibling — always looking back :D

char	*ft_strrchr(const char *s, int c)
{
	const char	*last = NULL;

	while (*s)
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	if (last != NULL)
		return ((char *)last);
	else
		return (0);
}

// Example usage
// Compile with: cc ft_strrchr.c -o test && ./test
// Finds the last occurrence of a character in a string :D
// int	main(void)
// {
// 	const char *str = "hello world, hello again";
// 	char ch = 'o';
// 	char *result;
//
// 	result = ft_strrchr(str, ch);
// 	if (result)
// 		printf("Last '%c' found at position: %ld\n", ch, result - str);
// 	else
// 		printf("Character '%c' not found!\n", ch);
// 	return (0);
// }
