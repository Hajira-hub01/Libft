#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c +32);
	else
		return (c);
}

int	main(void)
{
	char upper = 'Y';
	char lower = ft_tolower(upper);
	printf("upper: %c, lower: %c\n", upper, lower);
}