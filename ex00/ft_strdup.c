
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int ft_strlen(char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
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

int main()
{
    char s1[] = "12345";
    char *res = NULL;
    char *std = NULL;
    res = ft_strdup(s1);
    std = strdup(s1);
    printf("res %s\n", res);
    printf("std %s\n", res);
    printf("diff %d\n", ft_strcmp(res, std));
    return 0;
}