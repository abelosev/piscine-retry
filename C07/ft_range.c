
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

// void print_tab(int *tab, int size)
// {
//     int i;

//     i = 0;
//     while(i < size)
//     {
//         printf("%d ", tab[i]);
//         i++;
//     }
//     printf("\n");
// }

int *ft_range(int min, int max)
{
    int *res;
    int i;
    int size = max - min - 1;

    res = NULL;
    i = 0;
    if (min >= max)
        return (res);
    res = malloc(sizeof(int) * size);
    if (!res)
        return (NULL);
    min++;
    while (min < max)
    {
        res[i] = min;
        min++;
        i++;
    }
    //print_tab(res, size);
    return (res);
}

int main()
{
    int min = 5;
    int max = 5;
    int *res = ft_range(min, max);
    if (!res)
        printf("null ptr\n");
    return (0);
}