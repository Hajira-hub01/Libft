#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t n)
{
    unsigned char* d;
    unsigned char* s;
    d = (unsigned char*) dst;
    s = (unsigned char*) src;

   if (d == s)
    return dst;

   if (d < s)
   {
    size_t	i = 0;
    while (i < n)
    {
        d[i] = s[i];
        i++;
    }
   }
   else
   {
    while (n > 0) 
    {
        n--;
        d[n] = s[n];
    }
   }
   return dst;
}


 