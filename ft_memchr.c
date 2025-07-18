/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 15:56:19 by bavirgil          #+#    #+#             */
/*   Updated: 2025/07/18 16:04:47 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

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

// int	main(void)
// {
// 	unsigned char	target;
// 	unsigned char	*result;

// 	unsigned char arr[] = {10, 20, 30, 40, 50};
// 	target = 30;
// 	result = ft_memchr(arr, target, sizeof(arr));
// 	if (result)
// 		printf("Found: %d at position %td\n", *result, result - arr); // Use
// 			%td for pointer difference
// 	else
// 		printf("Not found.\n");
// 	return (0);
// }
