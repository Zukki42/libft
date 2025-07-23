/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 16:55:50 by bavirgil          #+#    #+#             */
/*   Updated: 2025/07/23 18:53:59 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
