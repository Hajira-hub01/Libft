/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajmoham <hajmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:02:11 by hajmoham          #+#    #+#             */
/*   Updated: 2024/07/23 16:02:11 by hajmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t	ft_strlen(const char *s)
{
	size_t i;
	i = 0;
	while (s[i])
		i++;
	return (i);
}
