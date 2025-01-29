/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:03:35 by mregueir          #+#    #+#             */
/*   Updated: 2025/01/29 13:16:10 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	if (n < -2147483647)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	else
	{
		if (n < 0)
		{
			n = -n;
			write(fd, "-", 1);
		}
		if (n >= 10)
		{
			ft_putnbr_fd(n / 10, fd);
		}
	}
	ft_putchar_fd((n % 10) + '0', fd);
}
