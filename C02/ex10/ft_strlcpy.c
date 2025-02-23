/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anbelose <anbelose@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 13:37:15 by anbelose          #+#    #+#             */
/*   Updated: 2025/02/23 14:42:13 by anbelose         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <bsd/string.h>

int	ft_strlen(char *s)
{
    int i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    int i;

    i = 0;
    while (i < size - 1 && src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (ft_strlen(src));
}

int main()
{
    char *src = "012345";
    char dst[10];
    char my_dst[10];
    strlcpy(dst, src, 6);
    ft_strlcpy(my_dst, src, 6);
    printf("dst %s\n", dst);
    printf("my_dst %s\n", my_dst);
    printf("len1 %zu\n", strlcpy(dst, src, 6));
    printf("len2 %u\n", ft_strlcpy(my_dst, src, 6));
    return 0;
}
