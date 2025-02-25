/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_strcapitalize.c								 :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: anbelose <anbelose@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2025/02/22 18:37:43 by anbelose		  #+#	#+#			 */
/*   Updated: 2025/02/22 18:37:46 by anbelose		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_islow(char c)
{
	return (c >= 'a' && c <= 'z');
}

int ft_isupper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int ft_isdig(char c)
{
	return (c >= '0' && c <= '9');
}

int ft_isword(char c)
{
	return (ft_islow(c) || ft_isupper(c) || ft_isdig(c));
}

char *ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		if (ft_islow(str[i]) && (i == 0 || !(ft_isword(str[i - 1]))))
			str[i] -= 32;
		else if (ft_isupper(str[i]) && i != 0 && ft_isword(str[i - 1]))
			str[i] += 32;
		i++;
	}
	return (str);
}

int main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	printf("old %s\n", av[1]);
	printf("new %s\n", ft_strcapitalize(av[1]));
	return (0);
}