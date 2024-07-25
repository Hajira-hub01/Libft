#include "libft.h"


int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return  (c -32);
	else
		return (c);
}

int main ()
{
    char lower = 'l';
    char upper = ft_toupper(lower);
	printf("lower: %c, upper: %c\n", lower, upper);
}