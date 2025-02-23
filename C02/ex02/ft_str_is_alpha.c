
#include <unistd.h>

int ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int ft_str_is_alpha(char *str)
{
	int i;

	if (!str)
		return (0);
	if (!(str[0]))
		return (1);
	i = 0;
	while (str[i])
	{
		if (!(ft_isalpha(str[i])))
			return (0);
		i++;
	}
	return (1);
}

int main()
{
	char *s = "";
	if(ft_str_is_alpha(s))
		write(1, "yes", 4);
	else
		write(1, "no", 2);
	return 0;
}
