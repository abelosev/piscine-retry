#include "ft.h"

int ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char *ft_strchr(char *str, char c)
{
    while (*str) {
        if (*str == c)
            return str;
        str++;
    }
    return NULL;
}

char *ft_strndup(char *src, int n)
{
	int i;

	i = 0;
    char *dest = malloc(n + 1);
    if (!dest)
        return NULL;
	while (i < n)
    {
        dest[i] = src[i];
		i++;
	}
    dest[i] = '\0';
    return dest;
}

char *cut_spaces(char *str)
{
    while (*str == ' ')
        str++;
    if (!(*str))
        return ft_strdup("");

    int len = ft_strlen(str);
    char *end = str + len - 1;
    while (end > str && *end == ' ')
        end--;

    int new_len = end - str + 1;
    return ft_strndup(str, new_len);
}

int split_key_value(char *line, char **key, char **value)
{
    char *two_points = ft_strchr(line, ':');
    if (!two_points) {
        ft_putstr_fd(2, "Dict Error\n");
        return 0;
    }
    *two_points = '\0';
    *key = cut_spaces(line);
    *value = cut_spaces(two_points + 1);
    return 1;
}

t_dico create_element(char *line) {
    t_dico element;
    char *key = NULL;
    char *value = NULL;

    element.key = NULL;
    element.value = NULL;

    if (!split_key_value(line, &key, &value)) {
        return element;
    }

    element.key = ft_strndup(key, ft_strlen(key));
    element.value = ft_strndup(value, ft_strlen(value));

    if (!element.key || !element.value) {
        free(element.key);
        free(element.value);
        element.key = NULL;
        element.value = NULL;
    }
    return element;
}

t_dico *struct_total(char **tab)
{
    int line_nb;
	t_dico *total;
	int i;

	line_nb = 0;
    while (tab[line_nb])
        line_nb++;
	total = malloc(sizeof(t_dico) * (line_nb + 1));
    if (!total)
        return NULL;
	i = 0;
	while (i < line_nb)
	{
		total[i] = create_element(tab[i]);
		if (!(total[i].key) || !(total[i].value))
		{
			//free_struct
			return (NULL);
		}
		i++;
	}
    total[line_nb].key = NULL;
	total[line_nb].value = NULL;
    return (total);
}