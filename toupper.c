#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122) // ASCII 'a' to 'z'
		return (c - 32);      // 'a' (97) → 'A' (65)
	else
		return (c);
}
//int	main(void)
//{
//	char test1 = 'a';
//	char test2 = 'z';
//	char test3 = 'A';
//	char test4 = '9';
//	char test5 = '?';
//
//	printf("toupper '%c' → '%c'\n", test1, ft_toupper(test1)); // A
//	printf("toupper '%c' → '%c'\n", test2, ft_toupper(test2)); // Z
//	printf("toupper '%c' → '%c'\n", test3, ft_toupper(test3)); // A
//	printf("toupper '%c' → '%c'\n", test4, ft_toupper(test4)); // 9
//	printf("toupper '%c' → '%c'\n", test5, ft_toupper(test5)); // ?
//	return (0);
//} Tried a new way of main . Basicly convers small letters to big ones :p