#include "libft.h"

int int_len(int n)
{
    int i = 0;

    if (n == 0)
        return 1;
    if (n < 0)
        i++;
    while (n != 0)
    {
        n = n / 10;
        i++;
    }
    return i;
}

char *ft_itoa(int n)
{
    unsigned int len;
    unsigned int nb;
    char *str;

    if (n == -2147483648)
        return (ft_strdup("-2147483648"));
    len = int_len(n);
    str = malloc(len + 1);
    if (str == NULL)
        return NULL;
    str[len] = '\0';
    if (n == 0)
        str[0] = '0';
    nb = n;
    if (n < 0)
    {
        str[0] = '-';
        nb = -n;
    }
    while (nb != 0)
    {
        str[--len] = '0' + (nb % 10);
        nb = nb / 10;
    }
    return str;
}


int main()
{
    printf("%s\n", ft_itoa(2147483647));
}
