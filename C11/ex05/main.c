#include "do.h"

int ft_doop(int nb1, char *op, int nb2)
{
	int(*ops[5])(int, int);
	ops[0] = do_sum;
	ops[1] = do_mult;
	ops[2] = do_div;
	ops[3] = do_diff;
	ops[4] = do_mod;
	if (!ft_strcmp(op, "+"))
		return (ops[0](nb1, nb2));
	else if (!ft_strcmp(op, "*"))
		return (ops[1](nb1, nb2));
	else if (!ft_strcmp(op, "/"))
		return (ops[2](nb1, nb2));
	else if (!ft_strcmp(op, "-"))
		return (ops[3](nb1, nb2));
	else if (!ft_strcmp(op, "%"))
		return (ops[4](nb1, nb2));
	else
		return (0);
}

int main(int ac, char **av)
{
	int res;

	if (ac != 4)
		return (1);
	if (!ft_strcmp(av[2], "/") && ft_atoi(av[3]) == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (1);
	}
	if (!ft_strcmp(av[2], "%") && ft_atoi(av[3]) == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (1);
	}
	res = ft_doop(ft_atoi(av[1]), av[2], ft_atoi(av[3]));
	ft_putnbr(res);
	write(1, "\n", 1);
	return (0);
}