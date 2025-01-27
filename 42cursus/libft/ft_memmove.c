/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 12:40:01 by mregueir          #+#    #+#             */
/*   Updated: 2025/01/27 13:25:38 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	size_t			i;
	unsigned char	*origin;
	unsigned char	*destination;

	origin = (unsigned char *)src;
	destination = (unsigned char *)dest;
	if (destination < origin || destination >= (origin + num))
	{
		i = 0;
		while (i < num)
		{
			destination[i] = origin[i];
			i++;
		}
	}
	else
	{
		i = num;
		while (i > 0)
		{
			destination[i] = origin[i];
			i--;
		}
	}
	return ((void *)destination);
}

// int main()
// {
//     char dest[] = "pollo";
//     const char src[] = "patatas";
//     printf("Before memmove dest = %s, src = %s\n", dest, src);
//     ft_memmove(dest, src, 9);
//     printf("After memmove dest = %s, src = %s\n", dest, src);
//     return (0);
// }