/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:58:05 by bavirgil          #+#    #+#             */
/*   Updated: 2025/10/15 17:55:52 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_memmove — safely copies bytes between overlapping memory areas :D
// Works like ft_memcpy, but smarter! It handles overlapping memory regions
// by deciding whether to copy forward or backward so nothing gets overwritten.
// Returns the original pointer to 'dst'.
// Think of it as the cautious twin of ft_memcpy — less speed, more brains :D

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dst;
	s = src;
	if (src == dst || len == 0)
		return (dst);
	if (d > s)
	{
		d += len - 1;
		s += len - 1;
		while (len-- > 0)
			*d-- = *s--;
	}
	else
	{
		while (len-- > 0)
			*d++ = *s++;
	}
	return (dst);
}

// Example usage
// Compile with: cc ft_memmove.c -o test && ./test
// Demonstrates how ft_memmove handles overlapping memory safely :D
// int	main(void)
// {
// 	char src[] = "EAD";
// 	char dst[] = "POR";
//
// 	printf("Before ft_memmove:\n");
// 	printf("SRC: %s\n", src);
// 	printf("DST: %s\n", dst);
//
// 	ft_memmove(dst, src, 3);
//
// 	printf("\nAfter ft_memmove:\n");
// 	printf("SRC: %s\n", src);
// 	printf("DST: %s\n", dst);
//
// 	return (0);
// }
