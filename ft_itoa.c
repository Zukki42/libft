/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: bavirgil <bavirgil@student.42heilbronn.    +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2025/07/24 16:47:24 by bavirgil          #+#    #+#             */
/*   Updated: 2025/07/24 16:47:24 by bavirgil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// ft_itoa — turns an integer into a string :D
// Takes an int 'n' and returns a freshly allocated string representing it.
// Handles negatives, zero, and positive numbers like a champ.
// Think of it as itoa = “integer to ASCII” (because C loves cryptic names).
// Don’t forget to free the result later — malloc never forgets :D

static int	count_len(int n)
{
	int	len;

	len = (n <= 0);
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

static char	*fill_str(char *str, int n, int len)
{
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		while (--len > 0)
		{
			str[len] = '0' - (n % 10);
			n /= 10;
		}
	}
	else
	{
		while (--len >= 0)
		{
			str[len] = '0' + (n % 10);
			n /= 10;
		}
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = count_len(n);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	return (fill_str(str, n, len));
}

// Example usage
// Compile with: cc ft_itoa.c -o test && ./test
// Converts different ints into strings and prints them out :D
// int	main(void)
// {
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(42));
// 	printf("%s\n", ft_itoa(-42));
// 	printf("%s\n", ft_itoa(2147483647));
// 	printf("%s\n", ft_itoa(-2147483648));
// 	return (0);
// }
