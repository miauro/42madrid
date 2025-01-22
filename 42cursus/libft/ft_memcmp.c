/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 12:25:23 by mregueir          #+#    #+#             */
/*   Updated: 2025/01/22 12:25:23 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    size_t i;
    unsigned char *s1;
    unsigned char *s2;

    i = 0;
    s1 = (unsigned char *)str1;
    s2 = (unsigned char *)str2;
    while (i < n)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    return (0);
}

// int main()
// {
//     char str1[15] = "ABCDEF";
//     char str2[15] = "abcdef";
//     int ret;

//     ret = ft_memcmp(str1, str2, 5);

//     if (ret > 0)
//     {
//         printf("str2 is less than str1");
//     }
//     else if (ret < 0)
//     {
//         printf("str1 is less than str2");
//     }
//     else
//     {
//         printf("str1 is equal to str2");
//     }
//     return (0);
// }