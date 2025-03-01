/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   6-03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbelose <anbelose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 19:46:54 by anbelose          #+#    #+#             */
/*   Updated: 2025/03/01 20:54:57 by anbelose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	ft_sorted(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac && ft_strcmp(av[i], av[i - 1]) > 0)
		i++;
	if (i == ac)
		return (1);
	return (0);
}

void	ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

char ***trier(int ac, char ***av)
{
	int	flag;
	char *tmp;
	int i;

	flag = 1;
	while (flag)
	{
		i = 2;
		while (i < ac)
		{
			if ((ft_strcmp((*av)[i], (*av)[i - 1]) < 0))
			{
				tmp = (*av)[i];
				(*av)[i] = (*av)[i - 1];
				(*av)[i - 1] = tmp;
			}
			i++;
		}
		if (ft_sorted(ac, *av))
			flag = 0;
	}
	return (av);
}

int	main(int ac, char **av)
{	
	int	i;
	int	flag;
	char *tmp;

	if (ac < 2)
		return (1);
	if (ac == 2)
	{
		ft_putstr(av[1]);
		write(1, "\n", 1);
		return (0);
	}
	trier(ac, &av);
	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
