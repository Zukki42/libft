/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:19:30 by bavirgil          #+#    #+#             */
/*   Updated: 2025/07/16 13:19:30 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

//int	main(void)
//{
//	printf("ft_isdigit('0') = %d\n", ft_isdigit('0')); // 1
//	printf("ft_isdigit('9') = %d\n", ft_isdigit('9')); // 1
//	printf("ft_isdigit('a') = %d\n", ft_isdigit('a')); // 0
//}
// Prints 1 if : number :D
// Prints 0 if : No number >:( 