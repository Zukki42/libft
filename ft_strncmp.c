/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:23:45 by bavirgil          #+#    #+#             */
/*   Updated: 2025/07/16 14:30:59 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

// int	main(void)
// {
// 	char *s1;
// 	char *s2;
// 	int result, result2;

// 	s1 = "I love 42 nofsfs s rninettefhfh issues ha gat";
// 	s2 = "I hate 42 normissssntte issuesss";
// 	result = ft_strncmp(s1, s2, 50);
// 	result2 = strncmp(s1, s2, 50);
// 	printf("Result: %d\n Result2: %d", result, result2);
// }