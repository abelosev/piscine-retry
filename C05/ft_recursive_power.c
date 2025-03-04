#include <unistd.h>
#include <stdio.h>

int ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (power == 1)
		return (nb);
	return (ft_recursive_power(nb, --power) * nb);
}

int main()
{
	int nb = 2;
	int power = 3;

	printf("%d\n", ft_recursive_power(nb, power));
	return 0;
}
