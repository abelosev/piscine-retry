#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int is_dig(char c)
{
	return (c >= '0' && c <= '9');
}

int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\f'
		|| c == '\n' || c == '\v' || c == '\r');
}

int	ft_atoi(char *str)
{
	int i;
	int res;
	int sign;

	i = 0;
	res = 0;
	sign = 1;
	while (str[i] && is_space(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && is_dig(str[i]))
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}

int main(int ac, char **av)
{
	printf("atoi %d\n", atoi(av[1]));
	printf("ft_atoi %d\n", ft_atoi(av[1]));
	return 0;
}