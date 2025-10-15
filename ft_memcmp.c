/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 16:08:05 by bavirgil          #+#    #+#             */
/*   Updated: 2025/10/15 17:55:12 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_memcmp — compares two blocks of memory byte by byte :D
// Checks the first 'n' bytes of memory areas 's1' and 's2'.
// Returns 0 if they’re identical, or the difference between the first
// two differing bytes if not. Perfect for judging memory equality like a true critic :D

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n--)
	{
		if (*ptr1 != *ptr2)
			return (*ptr1 - *ptr2);
		ptr1++;
		ptr2++;
	}
	return (0);
}

// Example usage
// Compile with: cc ft_memcmp.c -o test && ./test
// Compares two byte arrays and reports if they’re the same or not :D
// int	main(void)
// {
// 	char	arr1[] = {10, 20, 40, 50, 90, 100};
// 	char	arr2[] = {10, 20, 30, 50, 60, 70, 80,};
// 	int		result;
//
// 	result = ft_memcmp(arr1, arr2, sizeof(arr1));
// 	if (result == 0)
// 		printf("Aye fam they are equal :D\n");
// 	else
// 		printf("Aye fam, memory blocks are DIFFERENT!! Result: %d\n", result);
// 	return (0);
// }
