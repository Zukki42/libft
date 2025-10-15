/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 17:25:58 by bavirgil          #+#    #+#             */
/*   Updated: 2025/10/15 17:56:11 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_memset — fills a block of memory with a specific byte :D
// Takes a pointer 's', a value 'c', and a number of bytes 'n'.
// It then sets each of those bytes in 's' to 'c'.
// Great for initializing arrays, buffers, or pretending data never existed.
// Returns the original pointer to 's' — because sharing is caring :D

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	value;

	ptr = s;
	value = (unsigned char)c;
	while (n--)
	{
		*ptr = value;
		ptr++;
	}
	return (s);
}

// Example usage
// Compile with: cc ft_memset.c -o test && ./test
// Demonstrates replacing bytes in a string with 'X' :D
// int	main(void)
// {
// 	char	str[30] = "Hello, I love cats :D";
//
// 	memset(str, 'X', 5);
// 	printf("After memset: %s\n", str);
// 	return (0);
// }
