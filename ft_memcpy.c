#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
    unsigned char* d;
    unsigned char* s;
    s = (unsigned char*) src;
    d = (unsigned char*) dst;

    if (d == s)
		return (dst);
    
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
