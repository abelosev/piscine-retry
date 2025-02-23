

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char *src = "01234";
	char std_dst[6];
	char my_dst[6];
	strcpy(std_dst, src);
	ft_strcpy(my_dst, src);
	printf("original %s\n", src);
	printf("std function %s\n", std_dst);
	printf("my function %s\n", my_dst);
	return 0;
}
