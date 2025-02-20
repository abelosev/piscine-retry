/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*													+:+ +:+		 +:+	 */
/*   By: anbelose <anbelose@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2025/02/20 17:41:20 by anbelose		  #+#	#+#			 */
/*   Updated: 2025/02/20 19:00:19 by anbelose         ###   ########.fr       */
/*																			*/
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;

	i = 0;
	if (!tab || size == 0)
		return ;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = tmp;
		i++;
	}
}
