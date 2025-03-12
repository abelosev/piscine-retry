#include "do.h"

void	ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void ft_putnbr(int nb)
{
	char c;

	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
		return ;
	}
	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	c = nb + '0';
	write(1, &c, 1);
}

// int ft_strlen(char *s)
// {
//     int i;

//     i = 0;
//     while (s[i])
//         i++;
//     return (i);
// }

// char *ft_strdup(char *src)
// {
//     int i;
//     int len;
//     char *res;

//     i = 0;
//     len = ft_strlen(src) + 1;
//     res = NULL;
//     res = malloc(sizeof(char) * len);
//     if (!res)
//         return (NULL);
//     while(src[i] && i < len)
//     {
//         res[i] = src[i];
//         i++;
//     }
//     res[i] = '\0';
//     return (res);
// }