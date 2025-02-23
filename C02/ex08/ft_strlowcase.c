/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbelose <anbelose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 16:39:54 by anbelose          #+#    #+#             */
/*   Updated: 2025/02/23 16:39:56 by anbelose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

char *ft_strlowcase(char *str)
{
    int i;
    
    i = 0;
    while (str[i])
    {
        if (ft_isupper(str[i]))
            str[i] += 'a' - 'A';
        i++;
    }
    return (str);
}

int main()
{
    char s[] = "  abcT4dDTF  ";
    printf("res %s\n", ft_strlowcase(s));
    return 0;
}
