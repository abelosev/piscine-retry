#include <stdlib.h>
#include <unistd.h>

void ft_putnbr(int nb)
{
	char c;

	if (nb < 0)
	{
		nb *= -1;
		write(1, "-", 1);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb %= 10;
	}
	c = nb + '0';
	write(1, &c, 1);
}

void print_tab(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		ft_putnbr(tab[i]);
		i++;
	}
}

int ft_plus(int val)
{
	val += 1;
	return (val);
}

int *ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	int *res;

	i = 0;
	res = malloc(sizeof(int) * (length));
	if (!res)
		return (NULL);
	while (i < length)
	{
		res[i] = (*f)(tab[i]);
		i++;
	}
	return (res);
}

int main()
{
	int tab[] = {1, 2, 3, 4};
	int *new = ft_map(tab, 4, &ft_plus);
	print_tab(new, 4);
	return 0;
}