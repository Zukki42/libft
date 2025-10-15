/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 14:34:49 by bavirgil          #+#    #+#             */
/*   Updated: 2025/10/15 17:47:05 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_calloc — malloc’s tidier, zero-obsessed cousin :D
// Allocates memory for (count * size) bytes and then clears it all to zero.
// Perfect for when you want memory but don’t want to see any random junk from before.
// If malloc fails, returns NULL — because sadness is real. :D

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, count * size);
	return (ptr);
}

// Quick demo main:
// Compile with: cc ft_calloc.c ft_memset.c -o test && ./test
//#include <stdio.h>
//#include <stdlib.h>
//
//int	main(void)
//{
//	int	*arr;
//
//	arr = (int *)ft_calloc(5, sizeof(int));
//	if (!arr)
//	{
//		printf("Memory allocation failed :(\n");
//		return (1);
//	}
//	for (int i = 0; i < 5; i++)
//		printf("arr[%d]: %d\n", i, arr[i]);
//	free(arr);
//	return (0);
//}
