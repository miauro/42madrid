/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:17:23 by mregueir          #+#    #+#             */
/*   Updated: 2024/11/12 13:55:47 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
	{
	int	aux;
	int	x;

	x = 0;
	while (x < size - 1)
	{
		if (tab[x] > tab[x + 1])
		{
			aux = tab[x];
			tab[x] = tab[x + 1];
			tab[x + 1] = aux;
			x = 0;
		}
		else
		{
			x++;
		}
	}
}
/*int	main(void)
	{
	int tab[5] = {3,6,13,2,0};
	ft_sort_int_tab(tab, 5);
	printf("%d-", tab[0]);
	printf("%d-", tab[1]);
	printf("%d-", tab[2]);
	printf("%d-", tab[3]);
	printf("%d-", tab[4]);
}*/
