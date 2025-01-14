/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 09:50:21 by mregueir          #+#    #+#             */
/*   Updated: 2024/11/19 12:04:32 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;
	int	i;

	i = 0;
	res = nb;
	if (power < 0)
		res = 0;
	else if (power == 0)
		res = 1;
	else
	{
		while (i < power - 1)
		{
			res = res * nb;
			i++;
		}
	}
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_power(4, 0));
	return (0);
}*/
