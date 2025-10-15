/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 18:55:48 by bavirgil          #+#    #+#             */
/*   Updated: 2025/10/15 17:51:56 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_bzero — wipes memory clean like it never existed :D
// Takes a pointer 's' and sets the next 'n' bytes to 0.
// Commonly used to clear buffers, structs, or to pretend mistakes never happened :D
// Basically the C version of “let’s forget that ever happened.”

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

// Tiny test main below:
// Compile with: cc ft_bzero.c -o test && ./test
//#include <stdio.h>
//#include <string.h>
//
//int	main(void)
//{
//	char	str[10] = "ABCDabcdef";
//
//	printf("Before bzero: %s\n", str);
//	ft_bzero(str, 8);
//	printf("After bzero: %s\n", str);
//	for (int i = 0; i < 10; i++)
//	{
//		printf("str[%d]: %d\n", i, str[i]);
//	}
//	return (0);
//}
