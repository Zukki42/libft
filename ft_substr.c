/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 20:32:54 by bavirgil          #+#    #+#             */
/*   Updated: 2025/10/15 18:04:11 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_substr — extracts a portion of a string :D
// Takes a string 's', a starting index 'start', and a length 'len'.
// Returns a new malloc’d string containing up to 'len' characters starting from 'start'.
// If 'start' is beyond the end of 's', returns an empty string.
// Great for cutting out pieces of text — or suspicious evidence :D

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*sub;

	i = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

// Example usage
// Compile with: cc ft_substr.c ft_strlen.c ft_strdup.c -o test && ./test
// Extracts a part of the string starting at index 7, length 5 :D
// int	main(void)
// {
// 	char *s = "Hello there, General Kenobi!";
// 	char *sub = ft_substr(s, 7, 5);
// 	printf("Substring: %s\n", sub);
// 	free(sub);
// 	return (0);
// }
