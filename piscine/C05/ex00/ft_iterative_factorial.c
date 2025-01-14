/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 08:50:07 by mregueir          #+#    #+#             */
/*   Updated: 2024/11/19 08:59:57 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = nb - 1;
	result = nb;
	if (nb < 0)
		result = 0;
	else if (nb == 0)
		result = 1;
	else
	{
		while (i > 0)
		{
			result = result * i;
			i--;
		}
	}
	return (result);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_factorial(5));
	return (0);
}*/
