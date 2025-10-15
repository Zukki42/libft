/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:36:36 by bavirgil          #+#    #+#             */
/*   Updated: 2025/10/15 17:57:31 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_putstr_fd — writes a string to the given file descriptor :D
// Sends the entire string 's' to 'fd' (1 = stdout, 2 = stderr, etc.).
// If 's' is NULL, it simply does nothing — very polite behavior :D
// Commonly used for printing text directly to files or the console.

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	while (*s)
	{
		write(fd, s, 1);
		s++;
	}
}

// Example usage
// Compile with: cc ft_putstr_fd.c -o test && ./test
// Prints a string to standard output :D
// int main(void)
// {
//     ft_putstr_fd("Hello there :D", 1);
//     return (0);
// }
