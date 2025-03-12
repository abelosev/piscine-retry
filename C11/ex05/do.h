#ifndef DO_H
# define DO_H

# include <unistd.h>

int	ft_atoi(char *str);
void	ft_putstr(char *s);
void ft_putnbr(int nb);
int	ft_strcmp(char *s1, char *s2);
// char *ft_strdup(char *src);
// int ft_strlen(char *s);
int	do_sum(int n1, int n2);
int	do_mult(int n1, int n2);
int	do_div(int n1, int n2);
int	do_diff(int n1, int n2);
int do_mod(int n1, int n2);

#endif