/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 14:34:49 by bavirgil          #+#    #+#             */
/*   Updated: 2025/07/21 15:30:42 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, count * size);
	return (ptr);
}
// int main()
// {
//     int *arr = (int *)ft_calloc(5, sizeof(int));

//     for (int i = 0; i < 5; i++)
//         printf("arr[%d]: %d\n", i, arr[i]);

//     free(arr);
//     return 0;
// }
