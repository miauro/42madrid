/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 22:47:20 by mregueir          #+#    #+#             */
/*   Updated: 2025/02/07 21:27:31 by mregueir         ###   ########.fr       */
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
		if (big[i] == lit[i])
			i++;
		else
			return (0);
	}
	return (1);
}

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t	i;

	i = 0;
	if (ft_strlen((char *)lit) > (int)len || len < 0)
		return (0);
	if (lit[0] == 0)
		return ((char *)big);
	while (i < (len - 1) && big[i] != 0)
	{
		if (ft_compare(&big[i], lit) == 1)
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}

// int main()
// {
//     const char big[] = "miaaaaaaatouuu";
//     const char lit[] = "";
//     const char *result = ft_strnstr(big, lit, 30);
//     printf("La primera vez de - %s - en - %s - es - %s -", big, lit, result);
//     return (0);
// }