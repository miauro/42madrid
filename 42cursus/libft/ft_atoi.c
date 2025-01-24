/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 23:39:01 by mregueir          #+#    #+#             */
/*   Updated: 2025/01/24 23:39:01 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_atoi(const char *str)
{
    int i;
    int result;
    int sign;

    sign = 1;
    result = 0;
    i = 0;
    while (str[i] == 32 || (str[i] > 9 && str[i] < 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -sign;
        i++;
    }

    while (str[i] != 0 && (str[i] > 47 && str[i] < 58))
    {
        result = (result * 10) + (str[i] - 48);
        i++;
    }
    return (result * sign);
}

// int main()
// {
//     char str[] = "                +2567";
//     printf("Atoi bueno: %d\nAtoi malo:  %d", atoi(str), ft_atoi(str));
//     return (0);
// }