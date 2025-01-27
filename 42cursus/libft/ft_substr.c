/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 14:44:01 by mregueir          #+#    #+#             */
/*   Updated: 2025/01/27 13:14:24 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str1;
	char			*str2;
	unsigned int	i;
	unsigned int	length;

	length = (unsigned int)len;
	i = 0;
	str1 = (char *)s;
	str2 = (char *)malloc(length * sizeof(char));
	if (str2 == NULL)
		return (NULL);
	while (i < len && str1[(start - 1) + i] != 0)
	{
		str2[i] = str1[(start - 1) + i];
		i++;
	}
	str2[i] = 0;
	return (str2);
}
