/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: bavirgil <bavirgil@student.42heilbronn.    +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2025/07/16 13:19:30 by bavirgil          #+#    #+#             */
/*   Updated: 2025/07/16 13:19:30 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_isdigit — checks if the given character is a digit (0–9) :D
// Returns 1 if 'c' is between 48 and 57 (ASCII values for '0' to '9'),
// otherwise returns 0. Basically asks: “Are you a number,or are you lying to me?” :D

#include "libft.h"


int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

// Example usage
// Compile with: cc ft_isdigit.c -o test && ./test
// Prints 1 if it’s a number, 0 if it’s not :D
// int	main(void)
// {
// 	printf("ft_isdigit('0') = %d\n", ft_isdigit('0'));
// 	printf("ft_isdigit('9') = %d\n", ft_isdigit('9'));
// 	printf("ft_isdigit('a') = %d\n", ft_isdigit('a'));
// }
