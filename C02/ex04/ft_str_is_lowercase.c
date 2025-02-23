#include <unistd.h>

int ft_islow(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int ft_str_is_lowercase(char *str)
{
	int i;

	if (!str)
		return (0);
	if (!(str[0]))
		return (1);
	i = 0;
	while (str[i])
	{
		if (!(ft_islow(str[i])))
			return (0);
		i++;
	}
	return (1);
}

int main()
{
	char *s = " asdfg";
	if(ft_str_is_lowercase(s))
		write(1, "yes", 4);
	else
		write(1, "no", 2);
	return 0;
}