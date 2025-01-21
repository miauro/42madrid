/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:33:25 by mregueir          #+#    #+#             */
/*   Updated: 2025/01/21 10:39:36 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (c);
	}
	return (0);
}

// #include <stdio.h>

// int main(void){
//     char letra = 'ñ';
//     int miau = ft_isprint(letra);
//     if(miau != 0)
//         printf("Es Imprimible. Observa: %c", letra);
//     else   
//         printf("No es Imprimible");
//     return (0);
// }