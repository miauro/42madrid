/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:47:59 by mregueir          #+#    #+#             */
/*   Updated: 2025/01/27 13:29:20 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_calloc(size_t items, size_t size)
{
	void		*ptr;
	size_t		i;

	i = 0;
	if (items == 0 || size == 0 || (items * size) / size != items)
		return (0);
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
