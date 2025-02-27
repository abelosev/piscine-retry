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


void ft_putnbr_base(int nbr, char *base)
{
	
}

int main()
{
	
}