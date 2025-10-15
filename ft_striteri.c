/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 15:28:59 by bavirgil          #+#    #+#             */
/*   Updated: 2025/10/15 17:59:12 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_striteri — applies a function to each character of a string :D
// Takes a string 's' and a function 'f' that receives both the index and a pointer to each character.
// Lets you modify each character in-place using your custom logic.
// Perfect for making every letter uppercase, offsetting ASCII values,or general chaos :D

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// Example usage
// Compile with: cc ft_striteri.c -o test && ./test
// Applies a sample function that uppercases every letter :D
// void	to_upper(unsigned int i, char *c)
// {
// 	(void)i;
// 	if (*c >= 'a' && *c <= 'z')
// 		*c -= 32;
// }
//
// int	main(void)
// {
// 	char	str[] = "make me loud!";
// 	ft_striteri(str, to_upper);
// 	printf("%s\n", str);
// 	return (0);
// }
