/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:47:59 by mregueir          #+#    #+#             */
/*   Updated: 2025/02/10 20:26:58 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_calloc(size_t items, size_t size)
{
	void	*ptr;
	size_t	i;

	i = 0;
	if (size * items == 0)
	{
		ptr = malloc(0);
		if (ptr == 0)
			return (0);
		return (ptr);
	}
	ptr = malloc(items * size);
	if (ptr == 0)
		return (0);
	while (i < (items * size))
	{
		((unsigned char *)ptr)[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
