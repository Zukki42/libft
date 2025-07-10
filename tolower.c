#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90) // ASCII 'A' to 'Z'
		return (c + 32);     // 'A' (65) → 'a' (97)
	else
		return (c);
}
//int	main(void)
//{
//	char test1 = 'A';
//	char test2 = 'Z';
//	char test3 = 'a';
//	char test4 = '!';
//	char test5 = '5';
//
//	printf("tolower '%c' → '%c'\n", test1, ft_tolower(test1)); // a
//	printf("tolower '%c' → '%c'\n", test2, ft_tolower(test2)); // z
//	printf("tolower '%c' → '%c'\n", test3, ft_tolower(test3)); // a
//	printf("tolower '%c' → '%c'\n", test4, ft_tolower(test4)); // !
//	printf("tolower '%c' → '%c'\n", test5, ft_tolower(test5)); // 5
//	return (0);
//} Tried a new way of main . Basicly convers BIG letters to smoll ones :p