/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 17:49:00 by mregueir          #+#    #+#             */
/*   Updated: 2025/01/28 18:19:21 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	*ft_getindex(int n)
{
	int	i;

	i = 1;
	while (n > 10 || n < -10)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_getcharpos(int n)
{
	char *str = (char *)malloc(ft)
}

char	*ft_getcharneg(int n)
{
}
char	*ft_itoa(int n)
{
	char	*str;

	if (n >= 0)
		str = ft_getcharpos(n);
	else
		str = ft_getcharneg(n);
	return (str);
}

int	main(void)
{
	ft_itoa(12345678);
	return (0);
}