/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 09:51:36 by mregueir          #+#    #+#             */
/*   Updated: 2025/01/22 09:51:36 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *ft_memchr(const void *ptr, int ch, size_t count)
{
    size_t i;
    unsigned char *p;
    unsigned char comp;

    comp = (unsigned char)ch;
    p = (unsigned char *)ptr;
    i = 0;
    while (i < count)
    {
        if (p[i] == comp)
            return ((void *)&p[i]);
        i++;
    }
    return (0);
}

// int main()
// {
//     const char str[] = "Tutoriapoint";
//     const char ch = 'p';
//     char *ret;
//     ret = (char *)ft_memchr(str, ch, strlen(str));
//     printf("String after |%c| is - |%s|\n", ch, ret);
//     return (0);
// }