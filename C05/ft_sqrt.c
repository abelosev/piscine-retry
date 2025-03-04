/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbelose <anbelose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 21:12:15 by anbelose          #+#    #+#             */
/*   Updated: 2025/03/03 21:12:27 by anbelose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	res = 0;
	while (res <= nb)
	{
		if (res * res == nb)
			return (res);
		res++;
	}
	return (0);
}

// int main()
// {
//	 int nb = 5;
//	 printf("%d\n", ft_sqrt(nb));
//	 return (0);
// }
