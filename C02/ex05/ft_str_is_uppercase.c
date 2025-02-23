#include <unistd.h>

int ft_isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int ft_str_is_uppercase(char *str)
{
	int i;

	if (!str)
		return (0);
	if (!(str[0]))
		return (1);
	i = 0;
	while (str[i])
	{
		if (!(ft_isupper(str[i])))
			return (0);
		i++;
	}
	return (1);
}

int main()
{
	char *s = "ADFGHJ";
	if(ft_str_is_uppercase(s))
		write(1, "yes", 4);
	else
		write(1, "no", 2);
	return 0;
}