/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajmoham <hajmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 15:55:45 by hajmoham          #+#    #+#             */
/*   Updated: 2024/07/23 15:55:45 by hajmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') || (c >= '0'
			&& c <= '9'))
		return (1);
	else
		return (0);
}
