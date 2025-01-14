/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:46:05 by mregueir          #+#    #+#             */
/*   Updated: 2024/11/11 13:57:06 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_print_reverse_alphabet(void)
	{
	char	a;

	a = 'z';
	while (a >= 'a' )
	{
		write(1, &a, 1);
		a--;
	}
}
