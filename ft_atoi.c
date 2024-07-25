#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long long	nb;
	int					sign;
    int i;

	sign = 1;
	nb = 0;
    i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - '0';
		if (sign == -1 && nb >= LLONG_MAX)
			return (0);
		if (nb >= LLONG_MAX)
			return (-1);
		i++;
	}
	return (sign * nb);
}


int main (void)
{
    printf("%d\n", ft_atoi("-999999955747383939"));
    printf("%d\n", atoi("-999999955747383939"));
}