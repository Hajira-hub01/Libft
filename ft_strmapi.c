#include "libft.h"

char	my_toupper(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z')
		return  (c -32);
	else
		return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
    unsigned int	i;

	i = 0;
	str = malloc(ft_strlen(s) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main ()
{
    char str[] = "hello";
    printf("%s\n", ft_strmapi(str,&my_toupper));
}