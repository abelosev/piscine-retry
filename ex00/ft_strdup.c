#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*rs;
	int		i;

	i = 0;
	while (src[i])
		i++;
	rs = malloc(sizeof(*rs) * i + 1);
	if (rs == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		rs[i] = src[i];
		i++;
	}
	rs[i] = '\0';
	return (rs);
}
