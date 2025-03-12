#include <stdio.h>
#include <stdlib.h>

int is_dig(char *c)
{
	return (*c >= '0' && *c <= '9');
}

int ft_count_if(char **tab, int length, int(*f)(char*))
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (tab[i] && i < length)
	{
		if (f(tab[i]))
			nb++;
		i++;
	}
	return (nb);
}

int main()
{
	char **tab = malloc(sizeof(char *) * 4);
	tab[0] = "1bsf";
	tab[1] = "abcd";
	tab[2] = "2wdf";
	tab[3] = NULL;
	printf("%d\n", ft_count_if(tab, 3, is_dig));
	return 0;
}