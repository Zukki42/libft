/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:23:38 by bavirgil          #+#    #+#             */
/*   Updated: 2025/10/15 18:00:47 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_strlen — counts how many characters are in a string before the '\0' :D
// Takes a C string and returns its length (not counting the null terminator).
// Basically measures how long your nonsense is — one byte at a time :D

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

// Example usage
// Compile with: cc ft_strlen.c -o test && ./test
// Counts and prints the length of a string :D
// int	main(void)
// {
// 	const char *str = "I dont know what im doing";
// 	size_t len;
//
// 	len = ft_strlen(str);
// 	printf("Length of the string: %zu\n", len);
//
// 	return (0);
// }
