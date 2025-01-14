/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 13:18:58 by mregueir          #+#    #+#             */
/*   Updated: 2024/11/17 15:36:25 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != 0)
		i++;
	while (j < nb && src[j] != 0)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}
/*#include <stdio.h>

int main (void)
	{
	char origen[] = "me gusta el pollo";
	char destino[] = "soy alfredo y ";
	
	ft_strncat(destino, origen, 6);
	printf("%s", destino);
	return 0;
}*/
