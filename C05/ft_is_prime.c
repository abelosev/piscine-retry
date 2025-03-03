#include <unistd.h>
#include <stdio.h>

int ft_is_prime(int nb)
{
    int res;

    if (nb <= 0 || nb == 1)
        return (0);
    res = 2;
    while (res < nb)
    {
        if (nb % res == 0)
            return (0);
        res++;
    }
    return (1);
}

int main()
{
    int nb = 2147483647;
    if(ft_is_prime(nb))
        printf("%d is prime\n", nb);
    else
        printf("%d isn't prime\n", nb);
    return (0);
}