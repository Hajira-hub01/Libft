# ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <unistd.h>

int	ft_isalpha(int c);
int ft_isalnum(int c);
int	ft_isdigit(int c);
int ft_isascii(int c);
int	ft_isprint(int c);
size_t ft_strlen(const char *str);
size_t  ft_strlcpy(char *dst, const char    *src, size_t   size);
int	ft_toupper(int c);
char *ft_strchr(const char *s, int c);


# endif