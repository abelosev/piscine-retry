#include "ft.h"

int  find_2_points(char *line)
{
    int i;
    
    i = 0;
    while (line[i] != '\0')
    {
        if (line[i] == ':')
            return (i);
        i++;
    }
    return (0);
}

int create_value(char *line, t_dico *element)
{
    int len_val;
    int i;
    int k;
    
    i = find_2_points(line);
    len_val = 0;
    while (line[i] == ' ')
        i++;
    if (line[i] == '\0')
    {
        ft_putstr_fd(2, "Dict Error\n");
        return (0);
    }
    while (line[i] && line[i] != ' ')
    {      
        len_val++;
        i++;
    }
    element->value = malloc(sizeof(char) * (len_val + 1));
    if (element->value == NULL)
    {
        ft_putstr_fd(2, "Malloc Error\n");
        return (0);
    }
    i -= len_val;
    k = 0;
    while (k < len_val)
    {
        element->value[k] = line[i + k];
        k++;
    }
    element->value[k] = '\0';
    return (1);
}

int create_key(char *line, t_dico *element)
{
    int i;
    int len_key;
    int k;

    i = find_2_points(line);
    len_key = 0;
    while (i >= 0 && line[i] != ' ')
    {
        len_key++;
        i--;
    }
    element->key = malloc(sizeof(char) * (len_key + 1));
    if (!element->key)
    {
        if (element->value)
            free(element->value);
        ft_putstr_fd(2, "Malloc Error\n");
        return (0);
    }
    k = 0;
    while (k < len_key)
    {
        element->key[k] = line[i + k];
        element->nb = ft_atoi(element->key);
        k++;
    }
    element->key[k] = '\0';
    return (1);
}

t_dico *struct_total(char **tab)
{
    int line_nb;
    int i;
    t_dico *total;

    line_nb = 0;
    while (tab[line_nb])
        line_nb++;
    total = malloc(sizeof(t_dico) * (line_nb + 1));
    if (!total)
        return (NULL);
    printf("HERE %p\n", total);
    i = 0;
    while (tab[i])
    {
        create_value(tab[i], &total[i]);
        create_key(tab[i], &total[i]);
        total[i].nb = ft_atoi(total[i].key);
        // if (!total[i])
        // {
        //     //free_struct
        //     //return (NULL);
        // }
        i++;
    }
    total[i].key = NULL;
    total[i].value = NULL;
    print_dico_str(total);
    return (total);
}