/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 19:13:34 by bavirgil          #+#    #+#             */
/*   Updated: 2025/07/21 15:30:17 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

// int main(void)
// {
//     char src[] = "Hello, ligma!";
//     char dest[15];

// 	ft_memcpy(dest, src, 15);

//     printf("Source: %s\n", src);
//     printf("Destination: %s\n", dest);

//     return (0);
// }
