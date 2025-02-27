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

int ft_strlen(char *s)
{
	int i;

	i = 0;
	while(s[i])
		i++;
	return (i);
}


void ft_putnbr_base(int nbr, char *base)
{
	char c;
	int base_len;
	long tmp;

	tmp = (long)nbr;
	base_len = ft_strlen(base);
	if (tmp < 0)
	{
		tmp *= -1;
		write(1, "-", 1);
	}
	if (tmp >= base_len)
	{
		ft_putnbr_base(tmp / base_len, base);
		tmp = tmp % base_len;
	}
	c = base[tmp];
	write(1, &c, 1);
}

int main()
{
	//ft_putnbr_base(127, "0123456789ABCDEF"); //7F
	//ft_putnbr_base(127, "01"); //1111111
	//ft_putnbr_base(2147483647, "0123456789");
	//ft_putnbr_base(127, "poneyvif"); //off
	ft_putnbr_base(-2147483648, "0123456789");
	return 0;
}