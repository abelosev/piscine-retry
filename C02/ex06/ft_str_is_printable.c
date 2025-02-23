/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_str_is_printable.c							  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: anbelose <anbelose@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2025/02/23 13:23:39 by anbelose		  #+#	#+#			 */
/*   Updated: 2025/02/23 13:23:42 by anbelose		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_str_is_printable(char *str)
{
	int i;

	if (!str)
		return (0);
	if (!(str[0]))
		return (1);
	i = 0;
	while (str[i])
	{
		if (str[i] < ' ' || str[i] > '~')
			return (0);
		i++;
	}
	return (1);
}

int main()
{
	char *s = "";
	printf("%d\n", ft_str_is_printable(s));
	return 0;
}
