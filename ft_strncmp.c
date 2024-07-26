int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s2[i] && (n > 0))
	{
		if (s1[i] != s2[i])
			break;
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	main(void)
{
	char			str1[] = "cars";
	char			str2[] = "cats";
	size_t	n;

	n = 3;
	printf("%i\n", ft_strncmp(str1, str2, n));
	printf("%i", strncmp(str1, str2, n));
}