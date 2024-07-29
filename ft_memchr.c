#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

int main ()
{
   char *str = "world";
   char c = 'p';
   printf("%s", ft_memchr(str, c, 3));
}
