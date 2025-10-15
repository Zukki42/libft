/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 13:08:47 by bavirgil          #+#    #+#             */
/*   Updated: 2025/10/15 18:00:32 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_strlcpy — safely copies a string into a destination buffer :D
// Copies up to dstsize- 1 characters from 'src' to 'dst' and always null-terminates it.
// Returns the total length of 'src' (so you can detect truncation if needed).
// Think of it as strcpy’s responsible adult version :D

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (i < dstsize - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// Example usage
// Compile with: cc ft_strlcpy.c ft_strlen.c -o test && ./test
// Copies src into dst safely and shows the result :D
// int main()
// {
//     char src[] = "Hello, world!";
//     char dst[30] = "Bye , world!";
//
//     size_t result = ft_strlcpy(dst, src, 30);
//
//     printf("dst: %s\n", dst);
//     printf("Result: %zu\n", result);
//
//     return (0);
// }
