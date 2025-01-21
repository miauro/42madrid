/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 13:26:09 by mregueir          #+#    #+#             */
/*   Updated: 2025/01/21 10:02:38 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)
{
    if((c > 64 && c < 91) || (c > 96 && c < 123))
    {
        return (c);
    }
    return (0);
}

/*#include <stdio.h>

int main(void){
    int miau = isalpha(' ');
    if(miau != 0)
        printf("Es alfa. ASCII = %d", miau);
    else   
        printf("No es alfa");
    return (0);
}*/