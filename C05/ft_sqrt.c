#include <unistd.h>
#include <stdio.h>

int ft_sqrt(int nb)
{
    int res;

    if (nb < 0)
        return (0);
    res = 0;
    while (res <= nb)
    {
        if (res * res == nb)
            return (res);
        res++;
    }
    return (0);
}

// int main()
// {
//     int nb = 5;
//     printf("%d\n", ft_sqrt(nb));
//     return (0);
// }