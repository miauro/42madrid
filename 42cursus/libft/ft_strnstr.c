/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 22:47:20 by mregueir          #+#    #+#             */
/*   Updated: 2025/02/09 10:43:21 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_compare(const char *big, const char *lit)
{
	int	i;

	i = 0;
	while (lit[i] != 0)
	{
		if (big[i] != lit[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t	i;

	i = 0;
	if (lit[0] == 0)
		return ((char *)big);
	if (len <= 0)
		return (0);
	if (ft_strlen((char *)lit) > (int)len)
		return (0);
	while (i < (len - 1) && big[i] != 0)
	{
		if ((int)i + ft_strlen((char *)lit) > (int)len)
			return (0);
		if (ft_compare(&big[i], lit) == 1)
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char big[] = "lorem ipsum dolor sit amet";
// 	const char lit[] = "dolor";
// 	const char *result = ft_strnstr(big, lit, 16);
// 	printf("La primera vez de - %s - en - %s - es - %s -", lit, big, result);
// 	return (0);
// }