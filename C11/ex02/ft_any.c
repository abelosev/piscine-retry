
#include <stdio.h>
#include <stdlib.h>

int is_dig(char *c)
{
	return (*c >= '0' && *c <= '9');
}

int ft_any(char **tab, int(*f)(char*))
{
	int i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}

int main()
{
	char **tab = malloc(sizeof(char*) * 3);
	tab[0] = "1asd";
	tab[1] = "abasd";
	tab[2] = NULL;
	printf("%d\n", ft_any(tab, is_dig));
	free(tab);
	return (0);
}