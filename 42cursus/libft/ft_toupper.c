/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:32:10 by mregueir          #+#    #+#             */
/*   Updated: 2025/01/21 11:33:36 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int ch)
{
	if (ch > 96 && ch < 123)
	{
		ch = ch - 32;
	}
	return (ch);
}

// #include <stdio.h>
// int main(void){
//     char ch;
//     ch = '0';
//     printf("%c in uppercase is represented as  %c", ch, ft_toupper(ch));
//     return 0;
// }