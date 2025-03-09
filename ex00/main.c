#include "ft.h"

int main(int ac, char **av)
{
    long long nb;
    char *dico;
    char *line_from_file;
    char **tab;
    t_dico *total;
    
    if (ac == 2)
    {
        nb = ft_atoi(av[1]);
        dico = "./numbers.dict";
    }
    else if (ac == 3)
    {
        dico = ft_strdup(av[1]);
        nb = ft_atoi(av[2]);
    }
    else
    {
	    ft_putstr_fd(2, "Error\n");
	    return (1);
    }
    if (nb < 0)
    {
        ft_putstr_fd(2, "Error\n");
        return (1);
    }
    line_from_file = ft_readline(dico);
    tab = ft_separate(line_from_file, "\n");
    
    total = struct_total(tab);
    print_dico_str(total);
    return (0);
}
