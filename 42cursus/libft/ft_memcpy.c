/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 11:50:12 by mregueir          #+#    #+#             */
/*   Updated: 2025/01/27 13:38:34 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t num)
{
	size_t			i;
	unsigned char	*origin;
	unsigned char	*destination;

	origin = (unsigned char *)src;
	destination = (unsigned char *)dest;
	i = 0;
	while (i < num)
	{
		destination[i] = origin[i];
		i++;
	}
	return ((void *)destination);
}

// int main()
// {
//     const char src[50] = "Miauuuuuuuu";
//     char dest[50] = "aaaaaaaaa";

//     printf("Before ft_memcpy dest = %s\n", dest);
//     ft_memcpy(dest, src, 4);
//     printf("After ft_memcpy dest = %s\n", dest);
//     return (0);
// }