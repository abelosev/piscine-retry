
#include <unistd.h>

void ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}

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

int main()
{
	int tab[] = {1, 2, 3, 4};
	ft_foreach(tab, 4, &ft_putnbr);
	return (0);
}