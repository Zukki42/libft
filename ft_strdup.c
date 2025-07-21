/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 14:51:56 by bavirgil          #+#    #+#             */
/*   Updated: 2025/07/21 15:29:55 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*s2;

	len = ft_strlen(s1);
	s2 = ft_calloc(len + 1, sizeof(char));
	if (!s2)
		return (NULL);
	ft_memcpy(s2, s1, len);
	return (s2);
}
// int	main(void)
// {
// 	char *str = ft_strdup("Hello");
// 	printf("%s\n", str);
// 	free(str);
// 	return (0);
// }