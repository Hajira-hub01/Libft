#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if (n == INT_MIN)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else
	{
		if (n > 9)
			ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd('0' + n % 10, fd);
	}
}

// #include<fcntl.h>
// int main ()
// {
//     int fd = open("test.txt", O_WRONLY);
//     ft_putnbr_fd(-45, fd);
// }