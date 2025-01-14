/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:23:57 by mregueir          #+#    #+#             */
/*   Updated: 2024/11/13 13:03:09 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
	{
	int	i;
	int	alpha;

	alpha = 0;
	i = 0;
	if (str[0] == '\0')
		return (1);
	else
	{
		while (str[i] != '\0')
		{
			if (str[i] < 'a' || str[i] > 'z')
			{
				alpha++;
			}
			i++;
		}
	}
	if (alpha > 0)
		return (0);
	else
		return (1);
}

/*int main(void)
	{
	int a = ft_str_is_lowercase("aaaaaaaAaa");
	printf("%d", a);
}*/
