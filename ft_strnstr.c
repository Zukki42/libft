/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 16:55:44 by bavirgil          #+#    #+#             */
/*   Updated: 2025/10/15 18:03:04 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_strnstr — searches for a substring within a string,but only up to 'len' characters :D
// Looks for the first occurrence of 'ndl' (needle) inside 'hay' (haystack).
// Stops searching once 'len' bytes have been checked or the substring is found.
// Returns a pointer to the beginning of the match, or NULL if not found.
// Basically: “find the needle in the haystack,but don’t wander off too far!” :D

char	*ft_strnstr(const char *hay, const char *ndl, size_t len)
{
	size_t	i;
	size_t	j;

	if (*ndl == '\0')
		return ((char *)hay);
	i = 0;
	while (hay[i] && i < len)
	{
		if (hay[i] == ndl[0])
		{
			j = 0;
			while (ndl[j] && hay[i + j] == ndl[j] && (i + j) < len)
				j++;
			if (ndl[j] == '\0')
				return ((char *)&hay[i]);
		}
		i++;
	}
	return (NULL);
}

// Example usage
// Compile with: cc ft_strnstr.c -o test && ./test
// Searches for a substring inside another string :D
// int	main(void)
// {
// 	const char	*big = "Find the hidden needle in this haystack!";
// 	const char	*little = "needle";
// 	char		*result;
//
// 	result = ft_strnstr(big, little, 40);
// 	if (result)
// 		printf("Found: %s\n", result);
// 	else
// 		printf("Not found!\n");
// 	return (0);
// }
