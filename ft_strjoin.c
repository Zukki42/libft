/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 16:15:07 by bavirgil          #+#    #+#             */
/*   Updated: 2025/10/15 17:59:31 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_strjoin — joins two strings into one big happy string :D
// Takes two strings 's1' and 's2', allocates enough memory for both + '\0',
// and returns a new string containing s1 followed by s2.
// Handles NULL inputs gracefully — returns duplicates or empty strings as needed.
// Basically the string version of teamwork :D

static char	*ft_strjoin_nullcheck(char const *s1, char const *s2)
{
	if (!s1 && !s2)
		return (ft_strdup(""));
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	return (NULL);
}

static char	*ft_strjoin_copy(char const *s1, char const *s2, size_t len_1,
		size_t len_2)
{
	char	*ptr;
	char	*tmp;

	ptr = malloc(len_1 + len_2 + 1);
	if (!ptr)
		return (NULL);
	tmp = ptr;
	while (*s1)
		*tmp++ = *s1++;
	while (*s2)
		*tmp++ = *s2++;
	*tmp = '\0';
	return (ptr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*check;

	check = ft_strjoin_nullcheck(s1, s2);
	if (check)
		return (check);
	return (ft_strjoin_copy(s1, s2, ft_strlen(s1), ft_strlen(s2)));
}

// Example usage
// Compile with: cc ft_strjoin.c ft_strdup.c ft_strlen.c -o test && ./test
// Joins two strings and prints the result :D
// int	main(void)
// {
// 	char *joined = ft_strjoin("Hello, ", "world!");
// 	printf("%s\n", joined);
// 	free(joined);
// 	return (0);
// }
