#include "ft.h"

int	ft_is_sep(char c, char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	word_count(char *str, char *charset)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (str[i])
	{
		while (str[i] && ft_is_sep(str[i], charset))
			i++;
		if (str[i] && !ft_is_sep(str[i], charset))
			nb++;
		while (str[i] && !ft_is_sep(str[i], charset))
			i++;
	}
	return (nb);
}

char	*word_fill(char **str, char *charset)
{
	char	*word;
	int		len;
	int		i;

	len = 0;
	i = 0;
	word = NULL;
	while ((*str)[len] && !ft_is_sep((*str)[len], charset))
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (i < len && !ft_is_sep(**str, charset))
	{
		word[i] = **str;
		(*str)++;
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_separate(char *str, char *charset)
{
	char	**tab;
	int		i;
	int		nb_word;

	i = 0;
	nb_word = word_count(str, charset);
	tab = malloc(sizeof(char *) * (nb_word + 1));
	if (!tab)
		return (NULL);
	while (i < nb_word)
	{
		while (*str && ft_is_sep(*str, charset))
			str++;
		tab[i] = word_fill(&str, charset);
		if (!tab[i])
		{
			free_tab(tab);
			return (NULL);
		}
		i++;
	}
	tab[i] = NULL;
	return (tab);
}