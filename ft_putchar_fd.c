/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 15:16:19 by bavirgil          #+#    #+#             */
/*   Updated: 2025/10/15 17:56:29 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_putchar_fd — writes a single character to a given file descriptor :D
// 'c' is the character to print, 'fd' is where to send it (1 = stdout,2 = stderr, etc.).
// Basically a fancy version of putchar that knows where to talk :D

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// Example usage
// Compile with: cc ft_putchar_fd.c -o test && ./test
// Writes the character 'A' to standard output :D
// int main(void)
// {
// 	ft_putchar_fd('A', 1);
// 	return (0);
// }
