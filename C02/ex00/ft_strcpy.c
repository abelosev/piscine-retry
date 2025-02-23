/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbelose <anbelose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 12:49:31 by anbelose          #+#    #+#             */
/*   Updated: 2025/02/23 12:49:33 by anbelose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}

int main()
{
    char *src = "";
    char std_dst[10];
    char my_dst[10];
    strcpy(std_dst, src);
    //_strcpy(my_dst, src);
    printf("original %s\n", src);
    printf("std function %s\n", std_dst);
    //printf("my function %s\n", my_dst);
    return 0;
}
