#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
//int	main(void)
//{
//	printf("65 (A): %d\n", ft_isascii(65));    // Expected: 1
//	printf("127: %d\n", ft_isascii(127));      // Expected: 1
//	printf("128: %d\n", ft_isascii(128));      // Expected: 0
//	printf("-5: %d\n", ft_isascii(-5));        // Expected: 0
//	return (0);
//}
// Checks if anything that we are printing is ascii . This includes the whole ascii table ( man ascii if you dont know what it is :) ) 