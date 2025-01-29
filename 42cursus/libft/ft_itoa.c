/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:49:00 by mregueir          #+#    #+#             */
/*   Updated: 2025/01/29 10:53:55 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_getindex(int n)
{
	int	i;

	i = 1;
	while (n >= 10 || n <= -10)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

int	ft_isneg(int n)
{
	if (n < 0)
		return (1);
	else
		return (0);
}

char	*ft_itoa(int n)
{
	int		index;
	int		neg;
	char	*result;

	neg = ft_isneg(n);
	index = ft_getindex(n) + neg;
	result = (char *)malloc((index + 1) * sizeof(char));
	if (!result)
		return (NULL);
	if (neg > 0)
	{
		result[0] = '-';
		n = -n;
	}
	result[index] = 0;
	while (n >= 10)
	{
		result[index - 1] = (n % 10) + '0';
		n = (n / 10);
		index--;
	}
	result[index - 1] = (n % 10) + '0';
	return (result);
}

// int	main(void)
// {
// 	printf("%s", ft_itoa(-4));
// 	return (0);
// }