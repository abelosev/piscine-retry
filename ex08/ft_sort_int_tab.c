/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*													+:+ +:+		 +:+	 */
/*   By: anbelose <anbelose@student.42.fr>		  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2025/02/20 18:24:16 by anbelose		  #+#	#+#			 */
/*   Updated: 2025/02/20 18:59:45 by anbelose         ###   ########.fr       */
/*																			*/
/* ************************************************************************** */

#include <unistd.h>

int	ft_sorted(int *tab, int size)
{
	int	i;

	i = 1;
	while (i < size && tab[i] >= tab[i - 1])
		i++;
	if (i == size)
		return (1);
	else
		return (0);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	flag;
	int	i;
	int	tmp;

	if (!tab || size == 0)
		return ;
	flag = 1;
	while (flag)
	{
		i = 1;
		while (i < size)
		{
			if (tab[i] < tab[i - 1])
			{
				tmp = tab[i];
				tab[i] = tab[i - 1];
				tab[i - 1] = tmp;
			}
			i++;
		}
		if (ft_sorted(tab, size))
			flag = 0;
	}
}
