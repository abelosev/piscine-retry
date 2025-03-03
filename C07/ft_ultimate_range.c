
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

void print_tab(int *tab, int size)
{
    int i;

    i = 0;
    while(i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }
    printf("\n");
}


int ft_ultimate_range(int **range, int min, int max)
{

    int size;
    int i;

    if (min >= max)
    {
        range = NULL;
        return (0);
    }
    size = max - min - 1;
    *range = malloc(sizeof(int) * size);
    if (!*range)
        return (-1);
    i = 0;
    while(i < size) // why min < max doesn't work? (in case of min++)
    {
        (*range)[i] = min + 1 + i;
        i++;
    }
    return (size);
}

int main()
{
    int min = 5;
    int max = -5;
    int *range = NULL;
    ft_ultimate_range(&range, min, max);
    print_tab(range, max - min - 1);
    return (0);
}