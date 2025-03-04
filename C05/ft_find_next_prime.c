/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbelose <anbelose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 21:14:45 by anbelose          #+#    #+#             */
/*   Updated: 2025/03/03 21:15:09 by anbelose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <limits.h>

int	ft_is_prime(int nb)
{
	int	res;

	if (nb <= 0 || nb == 1)
		return (0);
	res = 2;
	while (res < nb)
	{
		if (nb % res == 0)
			return (0);
		res++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	res;

	if (nb < 2)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	res = nb + 1;
	while (res <= INT_MAX)
	{
		if (ft_is_prime(res))
			return (res);
		res++;
	}
	return (nb);
}

// int main()
// {
// 	int nb = 5;

// 	printf("next prime %d\n", ft_find_next_prime(nb));
// 	return 0;
// }
