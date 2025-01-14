/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:57:27 by mregueir          #+#    #+#             */
/*   Updated: 2024/11/24 17:24:31 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;

	i = 0;
	if (min >= max)
	{
		ptr = 0;
	}
	else
	{
		ptr = malloc((max - min) * sizeof(int));
		while (min < max)
		{
			ptr[i] = min;
			i++;
			min++;
		}
	}
	return (ptr);
	free (ptr);
}
/*
#include <stdio.h>
int main()
{
    int min = 0;
    int max = 100;
    int *ptr;
    int i;

    ptr = ft_range(min, max);

    for (i = 0; i <= (max - min); i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\n");
}*/
