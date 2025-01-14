/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 07:11:06 by mregueir          #+#    #+#             */
/*   Updated: 2024/11/18 07:18:52 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	char string[] = "El número de caracteres de esta frase es";
	int	length = ft_strlen(string);
	
	printf("%s: %d", string, length);
}*/
