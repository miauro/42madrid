/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 12:40:01 by mregueir          #+#    #+#             */
/*   Updated: 2025/02/10 19:37:48 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memmove_process(void *dest, const void *src, size_t num)
{
	size_t			i;
	unsigned char	*origin;
	unsigned char	*destination;

	origin = (unsigned char *)src;
	destination = (unsigned char *)dest;
	i = 0;
	if (origin > destination)
	{
		while (i < num)
		{
			destination[i] = origin[i];
			i++;
		}
	}
	else
	{
		while (num > 0)
		{
			destination[num - 1] = origin[num - 1];
			num--;
		}
	}
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t num)
{
	if (src == 0 && dest == 0)
		return (0);
	return (ft_memmove_process(dest, src, num));
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