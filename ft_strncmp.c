/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:23:45 by bavirgil          #+#    #+#             */
/*   Updated: 2025/10/15 18:02:40 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_strncmp — compares two strings up to 'n' characters :D
// Works like strcmp,but only checks up to 'n' bytes or until a difference is found.
// Returns 0 if they match up to that point, or the difference between the first
// two differing characters if they don’t.
// Perfect for cautious comparisons — because sometimes, less is more :D

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

// Example usage
// Compile with: cc ft_strncmp.c -o test && ./test
// Compares two strings and shows the difference :D
// int	main(void)
// {
// 	char *s1;
// 	char *s2;
// 	int result, result2;
//
// 	s1 = "I love 42 no issues";
// 	s2 = "I hate 42 normintte issuesss";
// 	result = ft_strncmp(s1, s2, 50);
// 	result2 = strncmp(s1, s2, 50);
// 	printf("Result: %d\nResult2: %d", result, result2);
// }
