# include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
    size_t i;

    i= 0;
    if (s == NULL)
        return (NULL);

    substr = malloc(len + 1);

    if (substr == (NULL))
        return (NULL);

    while (i < len)
    {
        substr[i] = s[start];
        i++;
        start++;
    }
    substr[i] = '\0';

    return substr;
}

int main ()
{
    char *s = "hello world";
    printf("%s", ft_substr(s, 7656, 76));
}