/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 18:55:48 by bavirgil          #+#    #+#             */
/*   Updated: 2025/07/16 19:08:58 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// #include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n--)
	{
		*ptr = 0;
		ptr++;
	}
}

// int	main(void)
// {
// 	char str[10] = "ABCDabcdef";
// 	printf("Before bzero: %s\n", str);

// 	bzero(str, 8);

// 	printf("After bzero: %s\n", str);

// 	for (int i = 0; i < 10; i++)
// 	{
// 		printf("str[%d]: %d\n", i, str[i]);
// 	}

// 	return (0);
// }