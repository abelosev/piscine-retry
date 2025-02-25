
#include <unistd.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

// int ft_atoi(char *s)
// {

// }

void ft_putnbr_base(int nbr, char *base)
{
	//if (nbr == INT_MIN)

	char hex[16] = "0123456789abcdef";
	
	if (nbr >= atoi(base))
	{
		ft_putnbr_base(nbr / atoi(base), base);
		nbr = nbr % atoi(base);
	}
	write(1, &hex[nbr], 1);
	
}

int main()
{
	char base[] = "2";
	int nbr = 127;
	ft_putnbr_base(nbr, base);
	return 0;
}