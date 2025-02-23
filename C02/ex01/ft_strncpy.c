/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbelose <anbelose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 13:18:07 by anbelose          #+#    #+#             */
/*   Updated: 2025/02/23 13:18:09 by anbelose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (i < n && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}

int main()
{
    char *src = "01234";
    //char std_dst[10];
    char my_dst[10];
    //strncpy(std_dst, src, 11);
    ft_strncpy(my_dst, src, 6);
    printf("original %s\n", src);
    //printf("std function %s\n", std_dst);
    printf("my function %s\n", my_dst);
    return 0;
}