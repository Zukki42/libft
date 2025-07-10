#include "libft.h"

int	ft_isalnum(int c)
{
	return
    (
        (c >= 48 && c <= 57) ||
		(c >= 65 && c <= 90) ||
		(c >= 97 && c <= 122)
    );
}


//int	main(void)
//{
//	printf("'A' is alnum? %d\n", ft_isalnum('A')); // Expected: 1
//	printf("'z' is alnum? %d\n", ft_isalnum('z')); // Expected: 1
//	printf("'5' is alnum? %d\n", ft_isalnum('5')); // Expected: 1
//	printf("'!' is alnum? %d\n", ft_isalnum('!')); // Expected: 0
//	printf("' ' is alnum? %d\n", ft_isalnum(' ')); // Expected: 0
//	printf("'@' is alnum? %d\n", ft_isalnum('@')); // Expected: 0
//	return (0);
//}
// Checks if the stuff we are printing are numbers / letters. Returns 0 if not a number / letter.