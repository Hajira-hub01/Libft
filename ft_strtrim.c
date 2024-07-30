#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char *s2;
    char *s3;
    unsigned int i;
    unsigned int j;
    unsigned int k;

    i = 0;
    while (s1)
    {
        j = 0;
        if (s1[i] != set[j])
            break;
        if (s1[i] == set[j])
        {
            s3[k] = s1[i];
            i++;
            j++;
        }
        
    }

    while (s1)
    {
        j = ft_strlen(s1);
        if (s1[i] != set[j])
            break;
        if (s1[i] == set[j])
        {
            s3[k] = s1[i];
            j--;
            i--;
        } 
    }
    s2 = malloc(ft_strlen(s3)+1);
    return s2;
}
