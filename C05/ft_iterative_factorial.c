#include <unistd.h>
#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int res;

    if (nb < 0)
        return (0);
    else if (nb == 0)
        return (1);
    res = nb;
    while (nb > 2)
    {
        res = res * (nb - 1);
        nb--;
    }
    return (res);
}

int main()
{
    int n = 4;
    
    printf("%d\n", ft_iterative_factorial(n));
    return 0;
}