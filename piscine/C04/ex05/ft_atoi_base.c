/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 10:58:03 by mregueir          #+#    #+#             */
/*   Updated: 2024/11/22 11:31:39 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_error(char *base)
{
	int	i;
	int	j;
	int	error;

	i = 0;
	error = 0;
	while (base[i] != 0)
	{
		j = 0;
		while (base[j] != 0)
		{
			if (base[i] == base[j])
				error++;
			j++;
		}
		if (base[i] == ' ' || base[i] == '-' || base[i] == '+')
			error++;
		i++;
	}
	if (i <= 1)
		error++;
	if (error > i)
		return (1);
	else
		return (0);
}

int	get_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != c)
	{
		i++;
	}
	return (i);
}

int	get_base(char *base)
{
	int	i;

	i = 0;
	while (base[i] != 0)
		i++;
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	i = 0;
	if (ft_error(base) <= 1)
	{
		while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
			i++;
		while (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				sign = -sign;
			i++;
		}
		while (str[i] != 0)
		{
			result = result * get_base(base) + get_index(str[i], base);
			i++;
		}
	}
	return (result * sign);
}
/*
#include <stdio.h>
int	main()
{	
	printf("%d", ft_atoi_base("     +--+-ff", "0123456789abcdef"));
	return (0);
}*/
