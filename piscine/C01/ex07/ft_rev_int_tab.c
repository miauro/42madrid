/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:50:30 by mregueir          #+#    #+#             */
/*   Updated: 2024/11/14 14:43:10 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
	{
	int	aux;
	int	x;

	x = 0;
	while (x <= size - 1)
	{
		aux = tab[x];
		tab[x] = tab[size - 1];
		tab[size - 1] = aux;
		x++;
		size--;
	}
}

/*int	main(void)
	{
	int tab[5] = {1,2,3,4,5};
	ft_rev_int_tab(tab, 5);
	printf("%d", tab[0]);
	printf("%d", tab[1]);
	printf("%d", tab[2]);
	printf("%d", tab[3]);
	printf("%d", tab[4]);
}*/
