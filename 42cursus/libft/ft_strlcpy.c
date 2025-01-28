/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:29:10 by mregueir          #+#    #+#             */
/*   Updated: 2025/01/28 14:49:32 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (src[j] != 0)
		j++;
	if (size > 0)
	{
		while (src[i] != 0 && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	return (j);
}

// int main()
// {
//     char dest[50] = "Hola, ";
//     char src[] = "mundo!";
//     int resultado = ft_strlcpy(dest, src, 230);
//     printf("Cadena: %s\n", dest);
//     printf("Longitud: %u\n", resultado);
//     return 0;
// }
