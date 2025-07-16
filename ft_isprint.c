/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:23:01 by bavirgil          #+#    #+#             */
/*   Updated: 2025/07/16 13:23:01 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.io>

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

//int	main(void)
//{
//	printf("'A' is printable? %d\n", ft_isprint('A'));   // 1
//	printf("' ' is printable? %d\n", ft_isprint(' '));   // 1
//	printf("'~' is printable? %d\n", ft_isprint('~'));   // 1
//	printf("'\\n' is printable? %d\n", ft_isprint('\n')); // 0
//	printf("127 is printable? %d\n", ft_isprint(127));   // 0
//	return (0);
//}

//Prints stuff that can be typed out from ascii table. ( Like : 1 , a , / , $ )