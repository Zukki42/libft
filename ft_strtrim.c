/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bavirgil <bavirgil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 13:57:50 by bavirgil          #+#    #+#             */
/*   Updated: 2025/10/15 18:03:56 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_strtrim — trims unwanted characters from both ends of a string :D
// Removes all characters in 'set' from the start and end of 's1'.
// Returns a new malloc’d string containing the trimmed result.
// If allocation fails or inputs are NULL, returns NULL.
// Basically gives your string a clean haircut — neat and tidy :D

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trim;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	trim = malloc(end - start + 1);
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, s1 + start, end - start + 1);
	return (trim);
}

// Example usage
// Compile with: cc ft_strtrim.c ft_strlen.c ft_strchr.c ft_strlcpy.c -o test&& ./test
// Trims spaces, tabs, and newlines from both ends of a string :D
// int main(void)
// {
// 	char *s = " \n\tHello , I love 42!\t\n";
// 	char *trimmed = ft_strtrim(s, " \n\t");
// 	printf("%s\n", trimmed);
// 	free(trimmed);
// }
