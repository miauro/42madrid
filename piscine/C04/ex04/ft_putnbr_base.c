/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 09:15:28 by mregueir          #+#    #+#             */
/*   Updated: 2024/11/19 08:41:10 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	compare_check(char *base)
{
	int	i;
	int	j;
	int	compare;

	i = 0;
	compare = 0;
	while (base[i] != 0)
	{
		j = 0;
		while (base[j] != 0)
		{
			if (base[i] == base[j])
				compare++;
			j++;
		}
		i++;
	}
	if (compare == i)
		return (0);
	else
		return (1);
}

int	plusminus_check(char *base)
{
	int	i;
	int	plusminus;

	i = 0;
	plusminus = 0;
	while (base[i] != 0)
	{
		if (base[i] == '+' || base[i] == '-')
			plusminus++;
		i++;
	}
	if (i <= 1)
		return (1);
	if (plusminus > 0)
		return (1);
	else
		return (0);
}

int	error_check(char *base)
{
	if (compare_check(base) == 1)
		return (1);
	else if (plusminus_check(base) == 1)
		return (1);
	else
		return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	long	lng;

	i = 0;
	lng = nbr;
	if (error_check(base) != 1)
	{
		if (lng < 0)
		{
			lng = -lng;
			write(1, "-", 1);
		}
		while (base[i] != 0)
			i++;
		if (lng >= i)
			ft_putnbr_base((lng / i), base);
		ft_putchar(base[lng % i]);
	}
}
