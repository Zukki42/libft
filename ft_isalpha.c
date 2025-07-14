/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 12:49:26 by bavirgil          #+#    #+#             */
/*   Updated: 2025/07/14 12:49:26 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

// int	main(void)
// {
// 	printf("ft_isalpha('A') = %d\n", ft_isalpha('A')); // Expected: 1
// 	printf("ft_isalpha('z') = %d\n", ft_isalpha('z')); // Expected: 1
// 	printf("ft_isalpha('M') = %d\n", ft_isalpha('M')); // Expected: 1
// 	printf("ft_isalpha('1') = %d\n", ft_isalpha('1')); // Expected: 0
// 	printf("ft_isalpha('!') = %d\n", ft_isalpha('!')); // Expected: 0
// 	printf("ft_isalpha(' ') = %d\n", ft_isalpha(' ')); // Expected: 0
// 	return (0);
// }
// Expected 1 if : Letters  ( EG : A , B , c , d  )
// Expected 0 if : No letters :( (Eg  ! , 2 , ' '  ))