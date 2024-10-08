/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajmoham <hajmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:35:25 by hajmoham          #+#    #+#             */
/*   Updated: 2024/08/10 16:47:50 by hajmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*s3;
	unsigned int	i;
	unsigned int	j;

	j = 0;
	if (s1 && s2 == (NULL))
		return (NULL);
	s3 = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (s3 == (NULL))
		return (NULL);
	if (s1)
	{
		i = 0;
		while (s1[i])
			s3[j++] = s1[i++];
	}
	if (s2)
	{
		i = 0;
		while (s2[i])
			s3[j++] = s2[i++];
	}
	s3[j] = '\0';
	return (s3);
}

// int main(void)
// {
//     printf("%s", ft_strjoin("hello ", "world"));
// }