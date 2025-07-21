/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 13:32:57 by bavirgil          #+#    #+#             */
/*   Updated: 2025/07/21 15:29:58 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (0);
}

// int	main(void)
// {
// 	char str[] = "And I wonder , if you know , what it means!";
// 	char ch = 's';

// 	char *result = ft_strchr(str, ch);
// 	if (result)
// 	{
// 		printf("Character '%c' found at position: %ld\n", ch, result - str);
// 	}
// 	else
// 	{
// 		printf("Character '%c' not found!\n", ch);
// 	}

// 	return (0);
// }