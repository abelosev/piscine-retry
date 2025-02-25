
#include <stdio.h>
#include <unistd.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find)
{
	int i;

	if (!str || !to_find)
		return (NULL);
	if (!(*to_find))
		return (str);
	while(*str)
	{
		i = 0;
		while (*str && to_find[i] && *str == to_find[i])
		{
			i++;
			str++;
		}
		if (!to_find[i])
			return (str - i);
		str -= i - 1;
	}
	return (NULL);
}

int main()
{
	char str[] = "12345678";
	char to_find[] = "";

	// char str[] = "ababcabc";
	// char to_find[] = "abc";

	// char str[] = "abcabcabcd";
	// char to_find[] = "abcabcd";

	// char str[] = "ababcd";
	// char to_find[] = "abcd";
	// char *str = NULL;
	// char *to_find = NULL;
	printf("strstr %s\n", strstr(str, to_find));
	printf("ft_strstr %s\n", ft_strstr(str, to_find));
	return 0;
}