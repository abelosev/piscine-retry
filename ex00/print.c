#include "ft.h"

void ft_putstr_fd(int fd, char *s)
{
    int i;

    i = 0;
    while (s[i])
    {
        write(fd, &s[i], 1); //to print in the sortie d'erreur
        i++;
    }
}

void    print_tab(char **tab)
{
    int i;

    i = 0;
    while (tab[i])
    {
        ft_putstr_fd(1, tab[i]);
        write(1, "\n", 1);
        i++;
    }
}

void    print_dico_str(t_dico *dico)
{
    int i;

    i = 0;
    while (dico[i].key && dico[i].value)
    {
        ft_putstr_fd(1, "Key : ");
        ft_putstr_fd(1, dico[i].value);
        ft_putstr_fd(1, ", Value : ");
        ft_putstr_fd(1, dico[i].key);
        write(1, "\n", 1);
        i++;
    }
}