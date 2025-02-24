
#include <stdio.h>
#include <unistd.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find)
{
	int len;
	char *to_find_start;

	if (!(*to_find))
		return (str);

	len = strlen(to_find);
	to_find_start = to_find;

	while (*str && *to_find && *str == *to_find)
	{
		(str)++;
		to_find++;
	}
	if (!(*to_find))
		return (str - len);
	to_find = to_find_start;

	return (NULL);
}

int main()
{
	char *str = "1234567819";
	char *to_find = "2";
	// char str[] = "ababcd";
	// char to_find[] = "abcd";
	printf("strstr %s\n", strstr(str, to_find));
	printf("ft_strstr %s\n", ft_strstr(str, to_find));
	return 0;
}