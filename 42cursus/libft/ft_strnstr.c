/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 22:47:20 by mregueir          #+#    #+#             */
/*   Updated: 2025/02/17 19:59:38 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*lit == 0)
		return ((char *)big);
	while (j < len && big[j] != 0)
	{
		i = 0;
		while (big[i + j] == lit[i] && (i + j) < len
			&& lit[i] != 0 && big[i + j] != 0)
		{
			if (lit[i + 1] == 0)
				return ((char *)&big[j]);
			i++;
		}
		j++;
	}
	return (0);
}

// int	main(void)
// {
// 	const char big[] = "lorem ipsum dolor sit amet";
// 	const char lit[] = "dolor";
// 	const char *result = ft_strnstr(big, lit, 0);
// 	printf("%s", result);
// 	return (0);
// }