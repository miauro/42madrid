/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 21:06:03 by mregueir          #+#    #+#             */
/*   Updated: 2024/11/09 21:06:27 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_line(int width, char first, char middle, char last)
{
	int	i;

	i = 0;
	while (i < width)
	{
		if (i == 0)
		{
			ft_putchar(first);
		}
		else if (i == width - 1)
		{
			ft_putchar(last);
		}
		else
		{
			ft_putchar(middle);
		}
		i++;
	}
	ft_putchar('\n');
}

int	rush(int x, int y)
{
	int	i;

	if (x < 0 || y < 0)
	{
		write(2, "Error: x & y must be greater or equal to 0.\n", 44);
		return (1);
	}
	i = 0;
	while (i < y)
	{
		if (i == 0)
		{
			print_line(x, 'A', 'B', 'C');
		}
		else if (i == y - 1)
		{
			print_line(x, 'C', 'B', 'A');
		}
		else
		{
			print_line(x, 'B', ' ', 'B');
		}
		i++;
	}
	return (0);
}
