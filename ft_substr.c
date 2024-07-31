# include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr;
    size_t i;

    i= 0;
    if (s == NULL)
        return (NULL);
    if (start >= ft_strlen(s))
        return (ft_strdup(""));
    if (len > ft_strlen(s) - start)
        len = ft_strlen(s) - start;
    substr = (char *)malloc(len + 1);
    if (substr == (NULL))
        return (NULL);
    while (i < len)
    {
        substr[i] = s[start];
        i++;
        start++;
    }
    substr[i] = '\0';
    return (substr);
}

int main ()
{
    char *s = "hello world";
    printf("%s\n", ft_substr(s, 6, 4));
}