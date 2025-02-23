/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_str_is_numeric.c								:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: anbelose <anbelose@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2025/02/20 19:33:45 by anbelose		  #+#	#+#			 */
/*   Updated: 2025/02/20 19:33:57 by anbelose		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include <unistd.h>

int ft_isnum(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int ft_str_is_numeric(char *str)
{
	int i;

	if (!str)
		return (0);
	if (!(str[0]))
		return (1);
	i = 0;
	while (str[i])
	{
		if (!(ft_isnum(str[i])))
			return (0);
		i++;
	}
	return (1);
}

int main()
{
	char *s = "00123";
	if(ft_str_is_numeric(s))
		write(1, "yes", 4);
	else
		write(1, "no", 2);
	return 0;
}