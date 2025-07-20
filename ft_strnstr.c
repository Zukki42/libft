/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 16:55:44 by bavirgil          #+#    #+#             */
/*   Updated: 2025/07/20 19:19:03 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *ndl, size_t len)
{
	size_t	i;
	size_t	j;

	if (*ndl == '\0')
		return ((char *)hay);
	i = 0;
	while (hay[i] && i < len)
	{
		if (hay[i] == ndl[0])
		{
			j = 0;
			while (ndl[j] && hay[i + j] == ndl[j] && (i + j) < len)
				j++;
			if (ndl[j] == '\0')
				return ((char *)&hay[i]);
		}
		i++;
	}
	return (NULL);
}
