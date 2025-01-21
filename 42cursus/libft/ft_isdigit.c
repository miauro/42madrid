/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 13:47:16 by mregueir          #+#    #+#             */
/*   Updated: 2025/01/21 10:02:44 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int c)
{
    if(c > 47 && c < 58)
    {
        return (c);
    }
    return (0); 
}

// #include <stdio.h>

// int main(void){
//     int miau = ft_isdigit('5');
//     if(miau != 0)
//         printf("Es dígito. ASCII = %d", miau);
//     else   
//         printf("No es digito");
//     return (0);
// }