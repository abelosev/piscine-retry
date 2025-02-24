#include <stdio.h>
#include <unistd.h>
#include <string.h>

unsigned int ft_strlen(char *s)
{
	unsigned int i;

	i = 0;
	while(s[i])
		i++;
	return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int dst_len;
	int src_len;
	unsigned int j;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dest);

	if (size == 0)
		return (src_len);

	j = 0;
	while (j < size - 1 && dest[dst_len + j - 1] && src[j])
	{
		dest[dst_len + j - 1] = src[j];
		j++;
	}
	dest[dst_len + j - 1] = '\0';
	return (ft_strlen(dest));
}

int main()
{
	char src[] = "45645";
	char dst[10] = "1234";
	printf("res %s\n", dst);
	printf("strlcat res %lu\n", strlcat(dst, src, 3));
	printf("ft_strlcat res %u\n", ft_strlcat(dst, src, 3));
	return 0;
}