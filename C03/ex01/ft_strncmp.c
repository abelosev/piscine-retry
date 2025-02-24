
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;

	if (n == 0)
		return (0);
	while (i < n && s1[i] && s2[i])
	{
		if(s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

int main()
{
	char *s1 = "15345";
	char *s2 = "123";
	printf("%d\n", strncmp(s1, s2, 5));
	return (0);
}