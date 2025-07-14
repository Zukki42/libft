/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isallnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:41:48 by bavirgil          #+#    #+#             */
/*   Updated: 2025/07/14 12:41:48 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h> For testing w

int	ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9')
		|| (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'));
}
// int	main(void)
// {
// 	printf("'A' is alnum? %d\n", ft_isalnum('A')); // Expected: 1
// 	printf("'z' is alnum? %d\n", ft_isalnum('z')); // Expected: 1
// 	printf("'5' is alnum? %d\n", ft_isalnum('5')); // Expected: 1
// 	printf("'!' is alnum? %d\n", ft_isalnum('!')); // Expected: 0
// 	printf("' ' is alnum? %d\n", ft_isalnum(' ')); // Expected: 0
// 	printf("'@' is alnum? %d\n", ft_isalnum('@')); // Expected: 0
// 	return (0);
// }