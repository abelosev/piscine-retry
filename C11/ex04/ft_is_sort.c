#include <stdio.h>

int ft_cmp(int n1, int n2)
{
	if (n1 < n2)
		return (-1);
	else if (n1 == n2)
		return (0);
	else
		return (1);
}

int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int i;

	i = 1;
	if (length == i)
		return (1);
	while (i < length)
	{
		if (f(tab[i - 1], tab[i]) > 0)
			return (0);
		i++;
	}
	return (1);
}

void print_tab(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
}

int main()
{
	int tab[] = {5, 0, 2, 7};
	printf("%d\n", ft_is_sort(tab, 4, ft_cmp));
	return 0;
}