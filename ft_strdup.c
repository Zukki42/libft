/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 14:51:56 by bavirgil          #+#    #+#             */
/*   Updated: 2025/10/15 17:58:53 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_strdup — duplicates a string using malloc :D
// Allocates memory and copies the string 's1' into a new location.
// The new string is null-terminated and must be freed after use.
// Basically makes a perfect clone of your string — evil twin included :D

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*s2;

	len = ft_strlen(s1);
	s2 = ft_calloc(len + 1, sizeof(char));
	if (!s2)
		return (NULL);
	ft_memcpy(s2, s1, len);
	return (s2);
}

// Example usage
// Compile with: cc ft_strdup.c ft_strlen.c ft_calloc.c ft_memcpy.c -o test&& ./test
// Creates a duplicate of the string and prints it :D
// int	main(void)
// {
// 	char *str = ft_strdup("Hello");
// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }