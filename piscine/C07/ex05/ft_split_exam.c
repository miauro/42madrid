/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_exam.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 14:50:32 by mregueir          #+#    #+#             */
/*   Updated: 2024/11/28 14:43:48 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	word_count(char *str)
{
	int	i;
	int	palabras;
	
	i = 0;
	palabras = 0;
	if (str[0] != 32 && (str[0] < 9 || str[0] > 13))
		palabras++;
	while (str[i] != 0)
	{
		if (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			if (str[i + 1] != 32 && (str[i + 1] < 9 || str[i + 1] > 13) && str[i + 1] != 0)
				palabras++;
		i++;
	}
	return (palabras);
}

int	word_length
{
	
}



int	main()
{
	printf("%d", word_count("miau miaaaau miau miau"));
	return (0); 
}
