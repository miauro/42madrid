/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 16:45:12 by mregueir          #+#    #+#             */
/*   Updated: 2024/11/18 13:46:25 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	length;

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
