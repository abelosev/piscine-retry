/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_strlcpy.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: anbelose <anbelose@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2025/02/23 13:37:15 by anbelose		  #+#	#+#			 */
/*   Updated: 2025/02/23 14:42:13 by anbelose		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <bsd/string.h>

int	ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	int src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

int main()
{
	char *src = NULL;
	char dst[6];
	char my_dst[6];
	strlcpy(dst, src, 6);
	//ft_strlcpy(my_dst, src, 6);
	printf("dst %s\n", dst);
	//printf("my_dst %s\n", my_dst);
	// printf("len1 %zu\n", strlcpy(dst, src, 6));
	// printf("len2 %u\n", ft_strlcpy(my_dst, src, 6));
	return 0;
}
