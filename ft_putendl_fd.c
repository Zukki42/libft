/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:14:38 by bavirgil          #+#    #+#             */
/*   Updated: 2025/10/15 17:56:51 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_putendl_fd — writes a string followed by a newline to a given file descriptor :D
// Works like ft_putstr_fd,but adds a '\n' at the end because every sentence deserves an ending.
// If 's' is NULL, it just quietly does nothing (good manners).
// Commonly used for printing lines to stdout or files.

void	ft_putendl_fd(char *s, int fd)
{
	if (s != NULL)
	{
		while (*s)
		{
			write(fd, s, 1);
			s++;
		}
		write(fd, "\n", 1);
	}
}

// Example usage
// Compile with: cc ft_putendl_fd.c -o test && ./test
// Prints some strings to standard output, each ending with a newline :D
// int main(void)
// {
//     ft_putendl_fd("Hello, world!", 1);
//     ft_putendl_fd("", 1);
//     ft_putendl_fd(NULL, 1);
//     return (0);
// }
