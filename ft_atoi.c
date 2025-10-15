/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 22:13:17 by bavirgil          #+#    #+#             */
/*   Updated: 2025/10/15 17:33:45 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_atoi — turns a string into an int (like a magic trick but with math :D)
// Steps:
// 1) Skip all spaces and weird whitespace (ASCII 9–13, you know the gang).
// 2) Check if there’s a '+' or '-' sign — minus means grumpy (negative).
// 3) Read digits until something non-digit crashes the party.
// 4) Multiply result by sign and boom, you’ve got an int!
// Note: No overflow check because we live dangerously :D

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

// Tiny test zone :D
// Compile with: cc ft_atoi.c -o test && ./test
//#include <stdio.h>
//
//int	main(void)
//{
//	char	str[] = "   ---123-+-abc123";
//
//	printf("%d\n", ft_atoi(str));
//	return (0);
//}
