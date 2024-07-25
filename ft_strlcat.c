#include "libft.h"
#include <stdio.h>

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i = 0;
    size_t j = 0;
    size_t src_len = ft_strlen(src);

    while (i < size && dst[i] != '\0') 
    {
        i++;
    }

    if (size <= i) 
    {
        return size + src_len;
    }

    while (i + j < size - 1 && src[j] != '\0') 
    {
        dst[i + j] = src[j];
        j++;
    }

    if (i + j < size) 
    {
        dst[i + j] = '\0';
    }

    return i + src_len;
}

int main() 
{
    char dst[4] = "Hi";
    const char *src = "World";
    size_t size = 4;

    size_t result = ft_strlcat(dst, src, size);
    printf("Resulting string: %s\n", dst);  
    printf("Return value: %zu\n", result);
}
