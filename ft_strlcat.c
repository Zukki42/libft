/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 15:16:04 by bavirgil          #+#    #+#             */
/*   Updated: 2025/07/21 15:29:40 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	dst_len = 0;
	i = 0;
	src_len = 0;
	while (dst[dst_len] && dst_len < dstsize)
		dst_len++;
	while (src[src_len])
		src_len++;
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	while (src[i] && (dst_len + i + 1) < dstsize)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// int	main(void)
// {
// 	char	dst[20] = "Hell, I love ";
// 	char	src[] = "EVoS (THEY ARE NOT MID!)";
// 	size_t	dstsize;
// 	size_t	result;

// 	dstsize = 46;
// 	printf("Before ft_strlcat, dst: %s\n", dst);
// 	result = ft_strlcat(dst, src, dstsize);
// 	printf("After ft_strlcat, dst: %s\n", dst);
// 	printf("Result (length that would be created): %zu\n", result);
// 	return (0);
// }
