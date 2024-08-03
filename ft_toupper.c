/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajmoham <hajmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:44:46 by hajmoham          #+#    #+#             */
/*   Updated: 2024/08/03 16:44:49 by hajmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c -32);
	else
		return (c);
}

// int main ()
// {
//     char lower = 'l';
//     char upper = ft_toupper(lower);
// 	printf("lower: %c, upper: %c\n", lower, upper);
// }