#include "libft.h"

void	my_toupper(unsigned int i, char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c = *c -32;
	else
		*c;
}

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &(s[i]));
		i++;
	}
}

int main ()
{
    char str[] = "hello";
    ft_striteri(str,&my_toupper);
    printf("%s\n", str);
}
