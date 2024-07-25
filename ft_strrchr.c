#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen((const char *)s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)s + len);
		len--;
	}
    if (c == '\0')
		return ((char *)s + len);
	return (NULL);
}

int main(void)
{
    char *str = "hello this is lucy";
    char c = 's';
    printf("%s", ft_strrchr(str, c));
}