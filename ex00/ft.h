#ifndef FT_H
# define FT_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

typedef struct s_dico {
    // long long nb;
    char *key;
    char *value;
}   t_dico;

int     ft_atoi(char *str);
void    ft_putstr_fd(int fd, char *s);
char	*ft_strdup(char *src);
char    *ft_readline(char *file);
char	**ft_separate(char *str, char *charset);
void	free_tab(char **tab);
void    print_tab(char **tab);
void    print_dico_str(t_dico *dico);
t_dico *struct_total(char **tab);

#endif
