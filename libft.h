# ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <unistd.h>
# include <limits.h>
#include <stdlib.h>

int	ft_isalpha(int c);
int ft_isalnum(int c);
int	ft_isdigit(int c);
int ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_atoi(const char *str)
char *ft_strchr(const char *s, int c);
size_t ft_strlen(const char *str);
size_t  ft_strlcpy(char *dst, const char    *src, size_t   size);
size_t ft_strlcat(char *dst, const char *src, size_t size);


# endif