/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 15:56:19 by bavirgil          #+#    #+#             */
/*   Updated: 2025/10/15 17:54:46 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_memchr — searches for a specific byte in a block of memory :D
// Looks through the first 'n' bytes of memory area 's' for the byte 'c'.
// If found, returns a pointer to the matching byte — if not, returns NULL.
// Think of it like “find the treasure in this memory sea!” :D

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	target;

	ptr = (unsigned char *)s;
	target = (unsigned char)c;
	while (n--)
	{
		if (*ptr == target)
			return (ptr);
		ptr++;
	}
	return (NULL);
}

// Example usage
// Compile with: cc ft_memchr.c -o test && ./test
// Searches for a value in a byte array and tells you where it’s hiding :D
// int	main(void)
// {
// 	unsigned char	target;
// 	unsigned char	*result;
// 	unsigned char arr[] = {10, 20, 30, 40, 50};
//
// 	target = 30;
// 	result = ft_memchr(arr, target, sizeof(arr));
// 	if (result)
// 		printf("Found: %d at position %td\n", *result, result - arr);
// 	else
// 		printf("Not found.\n");
// 	return (0);
// }
