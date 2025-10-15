/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 15:16:04 by bavirgil          #+#    #+#             */
/*   Updated: 2025/10/15 18:00:01 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_strlcat — appends one string to another, safely :D
// Concatenates 'src' to the end of 'dst',but never writes more than 'dstsize' bytes.
// Always null-terminates the result (unless dstsize = 0).
// Returns the total length of the string it tried to create — useful for buffer size checks.
// Basically strcat, but smarter and way less dangerous :D

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	dst_len = 0;
	i = 0;
	src_len = 0;
	while (dst[dst_len] && dst_len < dstsize)
		dst_len++;
	while (src[src_len])
		src_len++;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while (src[i] && (dst_len + i + 1) < dstsize)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// Example usage
// Compile with: cc ft_strlcat.c -o test && ./test
// Appends one string to another safely and prints the result :D
// int	main(void)
// {
// 	char	dst[20] = "Hell, I love ";
// 	char	src[] = "EVoS (THEY ARE NOT MID!)";
// 	size_t	dstsize;
// 	size_t	result;
//
// 	dstsize = 46;
// 	printf("Before ft_strlcat, dst: %s\n", dst);
// 	result = ft_strlcat(dst, src, dstsize);
// 	printf("After ft_strlcat, dst: %s\n", dst);
// 	printf("Result (length that would be created): %zu\n", result);
// 	return (0);
// }
