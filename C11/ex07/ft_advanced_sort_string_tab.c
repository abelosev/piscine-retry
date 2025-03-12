#include <stdio.h>
#include <stdlib.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int i;
	int flag;
	char *tmp;

	if (!tab || !(tab[0]) || !(tab[1]))
		return ;
	flag = 1;
	while (flag)
	{
		flag = 0;
		i = 1;
		while (tab[i])
		{
			if (cmp(tab[i], tab[i - 1]) < 0)
			{
				flag = 1;
				tmp = tab[i];
				tab[i] = tab[i - 1];
				tab[i - 1] = tmp;
			}
			i++;
		}
	}
}

int ft_strlen(char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

char *ft_strdup(char *src)
{
    int i;
    int len;
    char *res;

    i = 0;
    len = ft_strlen(src) + 1;
    res = NULL;
    res = malloc(sizeof(char) * len);
    if (!res)
        return (NULL);
    while(src[i] && i < len)
    {
        res[i] = src[i];
        i++;
    }
    res[i] = '\0';
    return (res);
}

void print_tab(char **tab)
{
	int i;

	i = 0;
	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}

int main()
{
	char **tab = malloc(sizeof(char *) * 4);
	tab[0] = ft_strdup("001");
	tab[1] = ft_strdup("01");
	tab[2] = ft_strdup("0001");
	tab[3] = NULL;
	ft_advanced_sort_string_tab(tab, &ft_strcmp);
	print_tab(tab);
	return 0;
}