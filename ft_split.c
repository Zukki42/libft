/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 16:55:50 by bavirgil          #+#    #+#             */
/*   Updated: 2025/10/15 17:58:10 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_split — splits a string into an array of strings using a delimiter :D
// Takes a string 's' and a delimiter character 'c'.
// Returns a NULL-terminated array of strings (each word gets its own malloc).
// If memory allocation fails at any point,it cleans up nicely and returns NULL.
// Perfect for breaking up sentences, CSV lines,or your sanity after debugging :D

static int	count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	**fill_split(char **arr, char const *s, char c, int wc)
{
	int		i;
	size_t	len;

	i = 0;
	len = 0;
	while (*s && i < wc)
	{
		while (*s == c)
			s++;
		while (s[len] && s[len] != c)
			len++;
		arr[i] = malloc(len + 1);
		if (!arr[i])
		{
			while (i > 0)
				free(arr[--i]);
			free(arr);
			return (NULL);
		}
		ft_strlcpy(arr[i++], s, len + 1);
		s += len;
		len = 0;
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		wc;

	if (!s)
		return (NULL);
	wc = count_words(s, c);
	arr = malloc(sizeof(char *) * (wc + 1));
	if (!arr)
		return (NULL);
	arr = fill_split(arr, s, c, wc);
	return (arr);
}

// Example usage
// Compile with: cc ft_split.c ft_strlcpy.c -o test && ./test
// Splits a string by spaces and prints each resulting word :D
// int	main(void)
// {
// 	char	**result;
// 	int		i = 0;
//
// 	result = ft_split("split this sentence please", ' ');
// 	if (!result)
// 		return (1);
//
// 	while (result[i])
// 	{
// 		printf("Word %d: %s\n", i + 1, result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }
