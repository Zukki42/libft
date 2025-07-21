/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 16:08:05 by bavirgil          #+#    #+#             */
/*   Updated: 2025/07/21 15:30:19 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

// int	main(void)
// {
// 	char	arr1[] = {10, 20, 40, 50, 90, 100};
// 	char	arr2[] = {10, 20, 30, 50, 60, 70, 80,};
// 	int		result;

// 	result = ft_memcmp(arr1, arr2, sizeof(arr1));
// 	if (result == 0)
// 		printf("Aye fam they are equal :D\n");
// 	else
// 		printf("Aye fam, memory blocks are DIFFERENT!! Result: %d\n", result);
// 	return (0);
// }
