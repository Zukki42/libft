/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:13:34 by bavirgil          #+#    #+#             */
/*   Updated: 2025/10/15 17:55:34 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_memcpy — copies bytes from one memory area to another :D
// Copies 'n' bytes from 'src' to 'dst'. It does not care about overlapping memory,
// so if your blocks overlap — go call ft_memmove instead! :D
// Returns the original pointer to 'dst'.
// Basically the “copy-paste” function of C.

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = dst;
	s = src;
	while (n--)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dst);
}

// Example usage
// Compile with: cc ft_memcpy.c -o test && ./test
// Copies bytes from src to dest and shows the result :D
// int main(void)
// {
//     char src[] = "Hello, ligma!";
//     char dest[15];
//
// 	ft_memcpy(dest, src, 15);
//
//     printf("Source: %s\n", src);
//     printf("Destination: %s\n", dest);
//
//     return (0);
// }
