/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbelose <anbelose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 21:11:37 by anbelose          #+#    #+#             */
/*   Updated: 2025/03/03 21:11:47 by anbelose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	res = nb;
	while (power > 1)
	{
		res *= nb;
		power--;
	}
	return (res);
}

// int main()
// {
//	 int nb = 1;
//	 int power = 0;
//	 printf("res %d\n", ft_iterative_power(nb, power));
//	 return (0);
// }
