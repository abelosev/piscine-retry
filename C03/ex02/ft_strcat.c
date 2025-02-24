#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_strlen(char *s)
{
	int i;

	i = 0;
	while(s[i])
		i++;
	return (i);
}

char *ft_strcat(char *dest, char *src)
{
	int dst_len;
	int j;

	if (!dest || !src)
		return (NULL);
	dst_len = ft_strlen(dest);
	j = 0;
	while (src[j])
	{
		dest[dst_len + j] = src[j];
		j++;
	}
	dest[dst_len + j] = '\0';
	return (dest);
}

int main()
{
	char src[] = "456";
	char dst[10] = "123";
	printf("dst_res %s\n", ft_strcat(dst, src));
	return 0;
}