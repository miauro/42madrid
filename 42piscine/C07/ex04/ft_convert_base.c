/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:16:18 by mregueir          #+#    #+#             */
/*   Updated: 2024/11/27 11:15:52 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	i = 0;
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
		result = result * get_index('\0', base) + get_index(str[i], base);
		i++;
	}
	return (result);
}

char		*ft_putnbr_base(int nb, char *base)
{
	if (nb < 0)
		nb = -nb;
	
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*result;

	if (ft_error(base_from) == 1 || ft_error(base_to) == 1
		|| ft_atoi_base(nbr, base_from) > 2147483647 
		|| ft_atoi_base(nbr, base_from) < -2147483648)
	{
		result = (char *)malloc(sizeof(char));
		result[0] = 0;
		return (result);
	}
	else
	{

	}
	


#include <stdio.h>

int main()
{
	printf("%d", ft_atoi_base("11", "01"));
	return 0;
}