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
	unsigned int dst_len;
	unsigned int src_len;
	unsigned int j;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dest);

	if (size <= dst_len)
		return (src_len + size);
	else if (size == dst_len + 1)
		return (src_len + dst_len);
	
	j = 0;
	while (j < size - dst_len - 1 && src[j])
	{
		dest[dst_len + j] = src[j];
		j++;
	}
	dest[dst_len + j] = '\0';
	return (src_len + dst_len);
}

int main()
{
	char src[] = "4567"; //4
	char my_dst[10] = "123"; //3
	char dst[10] = "123";
	unsigned int size = 6;

	printf("strlcat res %lu\n", strlcat(dst, src, size));
	printf("ft_strlcat res %u\n", ft_strlcat(my_dst, src, size));
	printf("res strlcat %s\n", dst);
	printf("res ft_strlcat %s\n", my_dst);
	return 0;
}