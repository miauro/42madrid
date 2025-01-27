/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:29:40 by mregueir          #+#    #+#             */
/*   Updated: 2025/01/27 13:23:13 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *str1)
{
	char		*str2;
	char		*str1b;
	int			i;

	str1b = (char *)str1;
	i = 0;
	while (str1b[i] != 0)
		i++;
	str2 = (char *)malloc(i * sizeof(char));
	if (str2 == 0)
		return (0);
	i = 0;
	while (str1b[i] != 0)
	{
		str2[i] = str1b[i];
		i++;
	}
	str2[i] = 0;
	return (str2);
}

// int main()
// {
//     char *str1 = "miau";
//     printf("Como podemos observar, %s es igual a %s", str1, ft_strdup(str1));
// }