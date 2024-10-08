/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajmoham <hajmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:55:09 by hajmoham          #+#    #+#             */
/*   Updated: 2024/08/10 16:21:07 by hajmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total_size;
	void	*ptr;

	if (size && count > (SIZE_MAX / size))
		return (NULL);
	total_size = count * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}

// int main ()
// {
// 	size_t count = 10;
// 	size_t size = 6;
// 	char *str = (char *)ft_calloc(count, size);
// 		int i = 0;
// 		while(i < size)
// 		{
// 			printf("%d ", (unsigned char)str[i]);
// 			i++;
// 		}
// }

