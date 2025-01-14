/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 08:09:39 by mregueir          #+#    #+#             */
/*   Updated: 2024/11/17 15:48:17 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	result;

	result = 0;
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n)
		i++;
	if (i < n)
		result = s1[i] - s2[i];
	return (result);
}
/*int main()
#include <stdio.h>
{
    int result = ft_strncmp("mieu", "miau", 2);
    printf("%d", result);
    return 0;
}*/
