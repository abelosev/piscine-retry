
#include <stdio.h>
#include <unistd.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find)
{
	int len;

	len = 0;
	if (!(*to_find))
		return (str);
	while(*str && *str != *to_find)
		str++;
	while (*str && *to_find && *str == *to_find)
	{
		(str)++;
		to_find++;
		len++;
	}
	if (!(*to_find))
		return (str - len);
	return (NULL);
}

int main()
{
	// char *str = "1234567819";
	// char *to_find = "02";
	char str[] = "ababcd";
	char to_find[] = "abcd";
	printf("strstr %s\n", strstr(str, to_find));
	printf("ft_strstr %s\n", ft_strstr(str, to_find));
	return 0;
}