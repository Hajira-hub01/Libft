/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hajmoham <hajmoham@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:12:38 by hajmoham          #+#    #+#             */
/*   Updated: 2024/08/10 16:38:51 by hajmoham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include<fcntl.h>
// int main ()
// {
//     int fd = open("test.txt", O_WRONLY);
//     ft_putnbr_fd(-45, fd);
// }