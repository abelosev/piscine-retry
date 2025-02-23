/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbelose <anbelose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 18:37:43 by anbelose          #+#    #+#             */
/*   Updated: 2025/02/22 18:37:46 by anbelose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int ft_islow(char c)
{
    return (c >= 'a' && c <= 'z');
}

int ft_isupper(char c)
{
    return (c >= 'A' && c <= 'Z');
}

int ft_isdig(char c)
{
    return (c >= '0' && c <= '9');
}

char *ft_strcapitalize(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        while (str[i] == ' ' || str[i] == '\t')
            i++;
        if (ft_islow(str[i]))
        {
            str[i] -= 'a' - 'A';
            i++;

        }
        while (ft_isdig(str[i]) || ft_islow(str[i]) || ft_isupper(str[i]))
            i++;
        i++;
    }
    return (str);
}

int main(int ac, char **av)
{
    printf("old %s\n", av[1]);
    printf("new %s\n", ft_strcapitalize(av[1]));
    return (0);
}