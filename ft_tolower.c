/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajmoham <hajmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:44:18 by hajmoham          #+#    #+#             */
/*   Updated: 2024/08/03 16:44:21 by hajmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c +32);
	else
		return (c);
}

// int	main(void)
// {
// 	char upper = 'Y';
// 	char lower = ft_tolower(upper);
// 	printf("upper: %c, lower: %c\n", upper, lower);
// }