/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbelose <anbelose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 16:25:14 by anbelose          #+#    #+#             */
/*   Updated: 2025/02/23 16:25:16 by anbelose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_islow(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

char *ft_strupcase(char *str)
{
    int i;
    
    i = 0;
    while (str[i])
    {
        if (ft_islow(str[i]))
            str[i] -= 'a' - 'A';
        i++;
    }
    return (str);
}

int main()
{
    char s[] = "  abcT4def  ";
    printf("res %s\n", ft_strupcase(s));
    return 0;
}