/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: bavirgil <bavirgil@student.42heilbronn.    +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2025/07/16 13:23:51 by bavirgil          #+#    #+#             */
/*   Updated: 2025/07/16 13:23:51 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_tolower — converts an uppercase letter to lowercase :D
// If 'c' is between 'A' (65) and 'Z' (90), adds 32 to make it lowercase.
// If it’s not an uppercase letter, it stays exactly the same.
// Basically: BIG letter goes smoll. Very smoll. :D

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}

// Example usage
// Compile with: cc ft_tolower.c -o test && ./test
// Converts uppercase letters to lowercase and leaves others alone :D
// int	main(void)
// {
// 	char test1 = 'A';
// 	char test2 = 'Z';
// 	char test3 = 'a';
// 	char test4 = '!';
// 	char test5 = '5';
//
// 	printf("tolower '%c' → '%c'\n", test1, ft_tolower(test1));
// 	printf("tolower '%c' → '%c'\n", test2, ft_tolower(test2));
// 	printf("tolower '%c' → '%c'\n", test3, ft_tolower(test3));
// 	printf("tolower '%c' → '%c'\n", test4, ft_tolower(test4));
// 	printf("tolower '%c' → '%c'\n", test5, ft_tolower(test5));
// 	return (0);
// }
