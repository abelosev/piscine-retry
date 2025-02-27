
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


}

int main()
{
    int min = 2;
    int max = 5;
    int *res = NULL;
    printf("%d\n", ft_ultimate_range(&res, min, max));
    print_tab(res, max - min - 1);
    return (0);
}