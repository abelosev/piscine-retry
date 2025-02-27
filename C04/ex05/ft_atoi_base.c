#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int base_check(char *base)
{
	int i;
	int k;
	char *to_compare;

	if (!base || !(base[0]) || !(base[1]))
		return (1);
	i = 0;
	while(base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (1);
		to_compare = base + i;
		k = i + 1;
		while (base[k])
		{
			if (base[k] == *to_compare)
				return (1);
			k++;
		}
		i++;
	}
	return (0);
}

int in_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\f'
		|| c == '\n' || c == '\v' || c == '\r');
}

int ft_strlen(char *s)
{
	int i;

	i = 0;
	while(s[i])
		i++;
	return (i);
}

int ft_atoi_base(char *str, char *base)
{
	int res;
	int i;
	int sign;

	res = 0;
	i = 0;
	sign = 1;
	if (base_check(base))
		return (0);
	while (str[i] && is_space(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && in_base(str[i], base) >= 0)
	{
		res = res * ft_strlen(base) + in_base(str[i], base);
		i++;
	}
	return (res * sign);
}

int main(int ac, char **av)
{
	printf("atoi %d\n", atoi(av[1]));
	printf("ft_atoi_base %d\n", ft_atoi_base(av[1], "0123456789abcdef"));
	return 0;
}