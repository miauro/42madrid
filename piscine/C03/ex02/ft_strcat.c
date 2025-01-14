/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 14:51:32 by mregueir          #+#    #+#             */
/*   Updated: 2024/11/19 10:44:10 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
	{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (dest[x] != 0)
	{
		x++;
	}
	while (src[y] != 0)
	{
		dest[x] = src[y];
		y++;
		x++;
	}
	dest[x] = 0;
	return (dest);
}
/*#include <stdio.h>
int main (void)
	{
	char origen[] = "Miaumiau";
	char destino[] = "Oleole locaracole ";
	
	ft_strcat(destino, origen);
	printf("%s", destino);
	return 0;
}*/
