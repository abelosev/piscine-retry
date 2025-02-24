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

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int dst_len;
	unsigned int j;

	if (nb == 0)
		return (dest);
	dst_len = ft_strlen(dest);
	j = 0;
	while (j < nb && src[j])
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
	printf("dst_res %s\n", ft_strncat(dst, src, 2));
	return 0;
}