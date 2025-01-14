/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 17:21:39 by mregueir          #+#    #+#             */
/*   Updated: 2024/11/27 14:46:54 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = malloc((max - min) * sizeof(int) + 1);
	if (range == 0)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (i);
}
/*
#include <stdio.h>

int main() {
    int *range;
    int min = 3;
    int max = 10;
    int size;

	size = max - min;
    ft_ultimate_range(&range, min, max);

        for (int i = 0; i < size; i++) {
            printf("%d ", range[i]);;

}
    return 0;
}*/
