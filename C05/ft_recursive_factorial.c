#include <unistd.h>
#include <stdio.h>

int ft_recursive_factorial(int nb)
{
    if (nb < 0)
        return (0);
    else if (nb == 0)
        return (1);
    if (nb > 2)
        nb--;
    return (ft_recursive_factorial(nb * (nb - 1)));
}

int main()
{
    int nb = 3;
    printf("res %d\n", ft_recursive_factorial(nb));
    return 0;
}