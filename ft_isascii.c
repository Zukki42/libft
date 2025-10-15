/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: bavirgil <bavirgil@student.42heilbronn.    +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2025/07/16 13:22:06 by bavirgil          #+#    #+#             */
/*   Updated: 2025/07/16 13:22:06 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


// ft_isascii — checks if a number fits in the ASCII range :D
// Returns 1 if 'c' is between 0 and 127 (inclusive), 0 otherwise.
// Basically checks if your char is a proper ASCII citizen or a rebel from Unicode-land.

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// Example usage
// Compile with: cc ft_isascii.c -o test && ./test
// Prints whether some numbers are valid ASCII values or not :D
// int	main(void)
// {
// 	printf("65 : %d\n", ft_isascii(65));
// 	printf("127: %d\n", ft_isascii(127));
// 	printf("128: %d\n", ft_isascii(128));
// 	printf("-5 : %d\n", ft_isascii(-5));
// 	return (0);
// }
