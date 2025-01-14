/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 13:43:25 by mregueir          #+#    #+#             */
/*   Updated: 2024/11/17 15:35:11 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	str_compare(char *str, char *to_find, int i)
{
	int	j;
	int	distintos;

	j = 0;
	distintos = 0;
	while (to_find[j] != 0)
	{
		if (str[i] != to_find[j])
			distintos ++;
		i++;
		j++;
	}
	if (distintos > 0)
		return (0);
	else
		return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	char	*found;

	i = 0;
	if (to_find[0] == 0)
		return (str);
	else
	{
		while (str[i] != 0)
		{
			if (str_compare(str, to_find, i) == 1)
			{
				found = &str[i];
				return (found);
			}
			else
				i++;
		}
		return (0);
	}
}

/*int main (void)
	{
	char str[] = "Miaumiau";
	char to_find[] = "au";
	
	printf ("%s\n", ft_strstr(str, to_find));
	printf ("%s\n", strstr(str, to_find));
	return 0;
}*/
