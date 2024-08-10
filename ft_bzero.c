/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajmoham <hajmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 15:55:23 by hajmoham          #+#    #+#             */
/*   Updated: 2024/08/10 16:02:15 by hajmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

// int main(void)
// {
//     char str[20] = "Hello, World!";
//     printf("Before: %s\n", str);
//     ft_bzero(str, 6);
//     printf("After: %s\n", str);
// }