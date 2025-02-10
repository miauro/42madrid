/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 10:40:40 by mregueir          #+#    #+#             */
/*   Updated: 2025/02/10 20:10:54 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

// #include <stdio.h>

// int main(void)
// {
//     int miau = ft_strlen("        ");
//     printf("Longitud de la palabra = %d", miau);
//     return (0);
// }