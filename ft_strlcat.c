/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajmoham <hajmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:36:01 by hajmoham          #+#    #+#             */
/*   Updated: 2024/08/03 16:36:04 by hajmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_len;

	i = 0;
	j = 0;
	src_len = ft_strlen(src);
	while (i < size && dst[i] != '\0')
		i++;
	if (size <= i)
		return (size + src_len);
	while (i + j < size - 1 && src[j] != '\0')
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i + j < size)
		dst[i + j] = '\0';
	return (i + src_len);
}

// int main()
// {
//     char dst[4] = "Hi";
//     const char *src = "World";
//     size_t size = 4;

//     size_t result = ft_strlcat(dst, src, size);
//     printf("Resulting string: %s\n", dst);
//     printf("Return value: %zu\n", result);
// }
