# include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
    size_t	i;
	char	*str;

	str = s;
    i = 0;
    while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}