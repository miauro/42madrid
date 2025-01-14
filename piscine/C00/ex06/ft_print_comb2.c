/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:14:18 by mregueir          #+#    #+#             */
/*   Updated: 2024/11/11 14:29:16 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_printchar(char a, char b, char c, char d)
	{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, ", ", 2);
}

void	assign_char(int x, int y)
	{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0' + (x / 10);
	b = '0' + (x % 10);
	c = '0' + (y / 10);
	d = '0' + (y % 10);
	ft_printchar(a, b, c, d);
}

void	ft_print_comb2(void)
	{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			if (x == 98 && y == 99)
			{
				write(1, "98 99", 5);
				return ;
			}
			else
			{
				assign_char(x, y);
				y++;
			}
		}
		x++;
	}
}
