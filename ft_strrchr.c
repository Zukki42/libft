/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 14:15:14 by bavirgil          #+#    #+#             */
/*   Updated: 2025/07/18 14:27:06 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*last = NULL;

	while (*s)
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	if (last != NULL)
		return ((char *)last);
	else
		return (NULL);
}

// int	main(void)
// {
// 	char str[] = "Hello, I hate them zucchinis!";
// 	char	ch = 'o';

// 	char *result = ft_strrchr(str, ch);
// 	if (result)
// 	{
// 		printf("Character '%c' found at this exact position :D :: %ld\n", ch, result - str);
// 	}
// 	else
// 	{
// 		printf("Character '%c' not found :P!\n", ch);
// 	}

// 	ch = 'v'; // change to v to check if it can find it ( it shouldn't)
// 	result = ft_strrchr(str, ch);
// 	if (result)
// 	{
// 		printf("Character '%c' is at this position :D : %ld\n", ch, result - str);
// 	}
// 	else
// 	{
// 		printf("Character '%c' not found :P\n", ch);
// 	}

// 	return (0);
// }
