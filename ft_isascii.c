/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isascii.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:50:53 by bavirgil          #+#    #+#             */
/*   Updated: 2025/07/14 12:50:53 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
// int	main(void)
// {
// 	printf("65 : %d\n", ft_isascii(65));    // Expected: 1
// 	printf("127: %d\n", ft_isascii(127));      // Expected: 1
// 	printf("128: %d\n", ft_isascii(128));      // Expected: 0
// 	printf("-5: %d\n", ft_isascii(-5));        // Expected: 0
// 	return (0);
// }