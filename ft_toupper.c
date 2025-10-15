/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: bavirgil <bavirgil@student.42heilbronn.    +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2025/07/16 13:24:00 by bavirgil          #+#    #+#             */
/*   Updated: 2025/07/16 13:24:00 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_toupper — converts a lowercase letter to uppercase :D
// If 'c' is between 'a' (97) and 'z' (122), subtracts 32 to make it uppercase.
// If it’s not a lowercase letter, it stays exactly as it is.
// Basically: smoll letter go BIG. Loud and proud! :D

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}

// Example usage
// Compile with: cc ft_toupper.c -o test && ./test
// Converts lowercase letters to uppercase and leaves others alone :D
// int	main(void)
// {
// 	char test1 = 'a';
// 	char test2 = 'z';
// 	char test3 = 'A';
// 	char test4 = '9';
// 	char test5 = '?';
//
// 	printf("toupper '%c' → '%c'\n", test1, ft_toupper(test1));
// 	printf("toupper '%c' → '%c'\n", test2, ft_toupper(test2));
// 	printf("toupper '%c' → '%c'\n", test3, ft_toupper(test3));
// 	printf("toupper '%c' → '%c'\n", test4, ft_toupper(test4));
// 	printf("toupper '%c' → '%c'\n", test5, ft_toupper(test5));
// 	return (0);
// }
