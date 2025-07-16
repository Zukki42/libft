/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:23:51 by bavirgil          #+#    #+#             */
/*   Updated: 2025/07/16 13:23:51 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}
//int	main(void)
//{
//	char test1 = 'A';
//	char test2 = 'Z';
//	char test3 = 'a';
//	char test4 = '!';
//	char test5 = '5';
//
//	printf("tolower '%c' → '%c'\n", test1, ft_tolower(test1)); // a
//	printf("tolower '%c' → '%c'\n", test2, ft_tolower(test2)); // z
//	printf("tolower '%c' → '%c'\n", test3, ft_tolower(test3)); // a
//	printf("tolower '%c' → '%c'\n", test4, ft_tolower(test4)); // !
//	printf("tolower '%c' → '%c'\n", test5, ft_tolower(test5)); // 5
//	return (0);
//} Tried a new way of main . Basicly convers BIG letters to smoll ones :p