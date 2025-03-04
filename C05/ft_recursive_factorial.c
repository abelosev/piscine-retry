#include <unistd.h>
#include <stdio.h>

int ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	return (ft_recursive_factorial(nb - 1) * nb);
}

int main()
{
	int nb = -1;
	printf("res %d\n", ft_recursive_factorial(nb));
	return 0;
}