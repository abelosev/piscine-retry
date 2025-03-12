#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

unsigned int	ft_strlen(char *s)
{
	unsigned int	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i++;
	return (i);
}

void ft_strcat(char *dest, char *src)
{
	int dst_len;
	int j;

	if (!src)
		return ;
	dst_len = ft_strlen(dest);
	j = 0;
	while (src[j])
	{
		dest[dst_len + j] = src[j];
		j++;
	}
	dest[dst_len + j] = '\0';
}

char *do_empty()
{
	char *res = malloc(1);
	if (!res)
		return (NULL);
	res[0] = '\0';
	return (res);
}

int count_len(int size, char **strs, char *sep)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i != size - 1)
			len += ft_strlen(sep);
		i++;
	}
	return (len);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    char *str;
    int len;
    int i;

	i = 0;
	if (size == 0)
		return(do_empty());
	len = count_len(size, strs, sep);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[0] = '\0';
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i != size - 1)
			ft_strcat(str, sep);
		i++;
	}
	str[len] = '\0';
	return (str);
}

char *ft_strdup(char *src)
{
    int i;
    int len;
    char *res;

    i = 0;
    len = ft_strlen(src) + 1;
    res = malloc(sizeof(char) * len);
    if (!res)
        return (NULL);
    while(src[i])
    {
        res[i] = src[i];
        i++;
    }
    res[i] = '\0';
    return (res);
}


int main()
{
	unsigned int size = 3;
    char **strs = malloc(sizeof(char *) * 4);
    strs[0] = "";
    strs[1] = "456";
    strs[2] = "789";
	strs[3] = NULL;

    char *sep = ft_strdup("ab");
    printf("%s\n", ft_strjoin(size, strs, sep));
    return (0);
}
