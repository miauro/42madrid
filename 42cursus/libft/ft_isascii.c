/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:24:58 by mregueir          #+#    #+#             */
/*   Updated: 2025/01/29 13:51:20 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c > 0 && c <= 127)
	{
		return (c);
	}
	return (0);
}

// #include <stdio.h>

// int main(void){
//     int miau = ft_isascii(129);
//     if(miau != 0)
//         printf("Es US ASCII. Código ASCII = %d", miau);
//     else
//         printf("No es US ASCII");
//     return (0);
// }