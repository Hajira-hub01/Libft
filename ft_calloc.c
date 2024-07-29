#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
    void *ptr;

    if (ptr == NULL)
		return (NULL);
	if (size && count > (SIZE_MAX / size))
		return (NULL);
	total_size = count * size;
	ptr = malloc(total_size);
	ft_bzero(ptr, total_size);
	return ptr;
}
