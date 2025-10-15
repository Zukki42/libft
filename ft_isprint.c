/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: bavirgil <bavirgil@student.42heilbronn.    +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2025/07/16 13:23:01 by bavirgil          #+#    #+#             */
/*   Updated: 2025/07/16 13:23:01 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


// ft_isprint — checks if a character is printable (visible stuff only) :D
// Returns 1 if 'c' is between 32 and 126 (inclusive), meaning it’s a normal
// character you can actually see or type. Returns 0 for control characters
// like '\n' or other invisible gremlins hiding in ASCII land.

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// Example usage
// Compile with: cc ft_isprint.c -o test && ./test
// Prints 1 if the character is printable, 0 if it’s not :D
// int	main(void)
// {
// 	printf("'A' is printable? %d\n", ft_isprint('A'));
// 	printf("' ' is printable? %d\n", ft_isprint(' '));
// 	printf("'~' is printable? %d\n", ft_isprint('~'));
// 	printf("'\\n' is printable? %d\n", ft_isprint('\n'));
// 	printf("127 is printable? %d\n", ft_isprint(127));
// 	return (0);
// }
