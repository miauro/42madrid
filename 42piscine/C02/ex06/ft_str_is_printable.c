/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:23:57 by mregueir          #+#    #+#             */
/*   Updated: 2024/11/14 14:13:06 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
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
			if (str[i] < 32 || str[i] > 126)
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
	int a = ft_str_is_printable("0");
	printf("%d", a);
}*/
