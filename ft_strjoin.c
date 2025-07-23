/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 16:15:07 by bavirgil          #+#    #+#             */
/*   Updated: 2025/07/23 16:27:10 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
