
#include <stdio.h>
#include <unistd.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (!src || !dest)
		return (NULL);
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int main()
{
	char *src = "01234";
	char std_dst[6];
	char my_dst[6];
	strncpy(std_dst, src, 5);
	ft_strncpy(my_dst, src, 5);
	printf("original %s\n", src);
	printf("std function %s\n", std_dst);
	printf("my function %s\n", my_dst);
	return 0;
}