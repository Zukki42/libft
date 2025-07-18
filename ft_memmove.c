/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:58:05 by bavirgil          #+#    #+#             */
/*   Updated: 2025/07/17 19:11:37 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

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
// int	main(void)
// {
// 	char src[] = "EAD";
// 	char dst[] = "POR";

// 	printf("Before ft_memmove:\n");
// 	printf("SRC: %s\n", src);
// 	printf("DST: %s\n", dst);

// 	ft_memmove(dst, src, 3);

// 	printf("\nAfter ft_memmove:\n");
// 	printf("SRC: %s\n", src);
// 	printf("DST: %s\n", dst);

// 	return (0);
// }