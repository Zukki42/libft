/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 12:43:04 by bavirgil          #+#    #+#             */
/*   Updated: 2025/10/15 17:57:15 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_putnbr_fd — writes an integer to a given file descriptor :D
// Handles negative numbers, zero,and even the edge case of INT_MIN (-2147483648).
// Uses recursion to print each digit from most significant to least.
// Perfect for sending numbers to stdout, stderr,or a file — wherever you please :D

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-", 1);
		write(fd, "2", 1);
		n = 147483648;
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	c = (n % 10) + '0';
	write(fd, &c, 1);
}

// Example usage
// Compile with: cc ft_putnbr_fd.c -o test && ./test
// Prints an integer to standard output :D
// int main(void)
// {
//     int n = 12;
//     ft_putnbr_fd(n, 1);
//     return (0);
// }
