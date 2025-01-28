/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 13:20:16 by mregueir          #+#    #+#             */
/*   Updated: 2025/01/28 14:48:51 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	length;

	j = 0;
	i = 0;
	length = 0;
	while (src[j] != 0)
		j++;
	while (dest[i] != 0)
		i++;
	if (size <= i)
		length = j + size;
	else
		length = i + j;
	j = 0;
	while (src[j] != 0 && (i + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (length);
}

/*
int main() {
    char dest[50] = "Hola, ";
    char src[] = "mundo!";
    int resultado = ft_strlcat(dest, src, 230);
    printf("Cadena: %s\n", dest);
    printf("Longitud: %u\n", resultado);
    return 0;
}*/
