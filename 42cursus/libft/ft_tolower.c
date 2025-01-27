/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:21:27 by mregueir          #+#    #+#             */
/*   Updated: 2025/01/27 13:38:51 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int ch)
{
	if (ch > 64 && ch < 91)
	{
		ch = ch + 32;
	}
	return (ch);
}

// #include <stdio.h>
// int main(void)
// {
// 	char ch;
// 	ch = 'g';
// 	printf("%c in lowercase is represented as  %c", ch, ft_tolower(ch));
// 	return (0);
// }