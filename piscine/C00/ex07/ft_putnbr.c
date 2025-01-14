/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 09:00:02 by mregueir          #+#    #+#             */
/*   Updated: 2024/11/11 15:50:39 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printchar(char c)
	{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
	{
	if (nb < -2147483647)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	else
	{
		if (nb < 0)
		{
			nb = -nb;
			write(1, "-", 1);
		}
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
		}
	}
	ft_printchar((nb % 10) + '0');
}

/*int main(void)
	{
	ft_putnbr(-42);
	return (0);
}*/
