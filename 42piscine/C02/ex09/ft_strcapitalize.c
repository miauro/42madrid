/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 16:43:36 by mregueir          #+#    #+#             */
/*   Updated: 2024/11/14 14:00:25 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(char c)
	{
	int	alpha;

	alpha = 0;
	if (c < 'A' || c > 'Z')
	{
		if (c < 'a' || c > 'z')
		{
			if (c < '0' || c > '9')
			{
				alpha = 1;
			}
		}
	}
	return (alpha);
}

char	*ft_strcapitalize(char *str)
	{
	int	i;
	int	palabra;

	palabra = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (palabra == 0)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
		if (palabra == 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			palabra = 0;
		}
		palabra = ft_isalpha(str[i]);
		i++;
	}
	return (str);
}

/*int main(void)
	{
	char string[] = "";
	ft_strcapitalize(string);
	printf("%s",string);
}*/
