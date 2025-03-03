#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

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

void    print_tab(char **tab)
{
    int i;

    i = 0;
    while (tab[i])
    {
        ft_putstr(tab[i]);
        write(1, "\n", 1);
        i++;
    }
}

unsigned int	ft_strlen(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dst_len;
	unsigned int	src_len;
	unsigned int	j;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dest);
	if (size <= dst_len)
		return (src_len + size);
	else if (size == dst_len + 1)
		return (src_len + dst_len);
	j = 0;
	while (j < size - dst_len - 1 && src[j])
	{
		dest[dst_len + j] = src[j];
		j++;
	}
	dest[dst_len + j] = '\0';
	return (src_len + dst_len);
}

int str_len(int size, char **strs, char *sep)
{
    int i;
    int len;

    i = 0;
    len = 0;
    while (i < size - 1)
    {
        len += ft_strlen(strs[i]);
        if (ft_strlen(strs[i]))     // A MODIFIER ?
            len += ft_strlen(sep);
        i++;
    }
    len += ft_strlen(strs[i]) + 1;
    return (len);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    char *str;
    int len;
    int i;

    if (size == 0 || !strs[0][0])
    {
        str = malloc(1);
        if (!str)
            return (NULL);
        str[0] = '\0';
    }
    len = str_len(size, strs, sep);
    str = malloc(sizeof(char) * len);
    if (!str)
        return (NULL);
    i = 0;
    while(i < size)
    {
        // if(!strs[i][0])
        //     i++;
        ft_strlcat(str, strs[i], len);
        ft_strlcat(str, sep, len);
        i++;
    }
    str[len] = '\0';
    return (str);
}

int main()
{
    char *sep = malloc(sizeof(char *) * 3);
    sep[0] = ' ';
    sep[1] = 'a';
    sep[2] = ' ';
    char **strs = malloc(sizeof(char *) * 4);
    strs[0] = malloc(3);
    strs[1] = malloc(3);
    strs[2] = malloc(1);
    strs[3] = NULL;
    strs[0][0] = '1';
    strs[0][1] = '2';
    strs[0][2] = '3';
    strs[1][0] = '4';
    strs[1][1] = '5';
    strs[1][2] = '6';
    strs[2][0] = '\0';
    // strs[2][1] = '8';
    // strs[2][2] = '9';
    unsigned int size = 3;
    printf("Tab :\n");
    print_tab(strs);
    char *res = ft_strjoin(size, strs, sep);
    printf("Res :\n");
    ft_putstr(res);
    return (0);
}