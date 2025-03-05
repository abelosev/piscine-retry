#include "ft_stock_str.h"
#include <unistd.h>

int ft_strlen(char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

void    ft_putstr(char *s)
{
    int i;

    i = 0;
    while(s[i])
    {
        write(1, &s[i], 1);
        i++;
    }
}

void    ft_putnbr(int n)
{
    char c;

    if (n >= 10)
    {
        ft_putnbr(n / 10);
        n = n % 10;
    }
    c = n + '0';
    write(1, &c, 1);
}

void ft_show_tab(struct s_stock_str *par)
{
    int i;
    int len;

    i = 0;
    while(par[i].str)
    {
        len = ft_strlen(par[i].str);
        ft_putstr(par[i].str);
        write(1, "\n", 1);
        ft_putnbr(len);
        write(1, "\n", 1);
        ft_putstr(par[i].copy);
        write(1, "\n", 1);
        i++;
    }
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*res;

	i = 0;
	len = ft_strlen(src) + 1;
	res = NULL;
	res = malloc(sizeof(char) * len);
	if (!res)
		return (NULL);
	while (src[i] && i < len)
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

void    free_tab(t_stock_str *tab)
{
    int i;

    i = 0;
    while (tab[i].str)
    {
		if (tab[i].copy)
        	free(tab[i].copy);
        i++;
    }
    free(tab);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    int i;
    t_stock_str *tab;

    i = 0;
    tab = malloc(sizeof(t_stock_str) * (ac + 1));
    if (!tab)
        return (NULL);
    while(i < ac)
    {
        tab[i].size = ft_strlen(av[i]);
        tab[i].str = av[i];
        tab[i].copy = ft_strdup(av[i]);
		if (!(tab[i].copy))
        {
            free_tab(tab);
            return (NULL);
        }
        i++;
    }
    tab[i].str = NULL;
	tab[i].copy = NULL;
    return (tab);
}

int main(int ac, char **av)
{
    t_stock_str *tab = ft_strs_to_tab(ac, av);
    ft_show_tab(tab);
    return 0;
}
