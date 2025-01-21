/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:12:07 by mregueir          #+#    #+#             */
/*   Updated: 2025/01/21 10:21:57 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c > 47 && c < 58) || ((c > 64 && c < 91) || (c > 96 && c < 123)))
	{
		return (c);
	}
	return (0);
}

// #include <stdio.h>

// int main(void){
//     int miau = ft_isalnum(',');
//     if(miau != 0)
//         printf("Es alfanumérico. ASCII = %d", miau);
//     else   
//         printf("No es alfanumérico");
//     return (0);
// }