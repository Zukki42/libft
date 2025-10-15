/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: bavirgil <bavirgil@student.42heilbronn.    +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2025/07/16 13:22:34 by bavirgil          #+#    #+#             */
/*   Updated: 2025/07/16 13:22:34 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_isalpha — checks if a character is part of the *alphabetic elite* :D
// Returns 1 if 'c' is a letter (A–Z or a–z).
// Returns 0 if 'c' is anything else (numbers, symbols,or your spacebar's lazy cousin).
// Basically: “Do you even alphabet, bro?” :D

int	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

// Tiny test main to show off its magic :D
// Compile with: cc ft_isalpha.c -o test && ./test
//#include <stdio.h>
//
//
//int	main(void)
//{
//	printf("ft_isalpha('A') = %d\n", ft_isalpha('A')); // Expected: 1
//	printf("ft_isalpha('z') = %d\n", ft_isalpha('z')); // Expected: 1
//	printf("ft_isalpha('M') = %d\n", ft_isalpha('M')); // Expected: 1
//	printf("ft_isalpha('1') = %d\n", ft_isalpha('1')); // Expected: 0
//	printf("ft_isalpha('!') = %d\n", ft_isalpha('!')); // Expected: 0
//	printf("ft_isalpha(' ') = %d\n", ft_isalpha(' ')); // Expected: 0
//	return (0);
//}
