#include <unistd.h>
#include <stdio.h>

int ft_not_printable(char c)
{
	return (c < ' ' || c > '~');
}

void ft_printhex(char c)
{
	char s1;
	char s2;
	char hex[16] = "0123456789abcdef";
	s1 = hex[c / 16];
	s2 = hex[c % 16];
	write(1, "\\", 1);
	write(1, &s1, 1);
	write(1, &s2, 1);
}

void ft_putstr_non_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if(ft_not_printable(str[i]))
			ft_printhex(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}

int main()
{
	// char str[2];
	// str[0] = 127;
	// str[1] = '\0';

	char *s = "hello\n";
	ft_putstr_non_printable(s);
	return 0;
}