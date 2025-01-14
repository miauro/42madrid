/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_exam_2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:43:19 by mregueir          #+#    #+#             */
/*   Updated: 2024/11/28 16:53:57 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_space(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	else
		return (0);
}

int	word_count(char *src)
{
	int	i;
	int	word;
	
	i = 0;
	word = 0;
	while(src[i] != 0)
	{
		if (ft_is_space(src[i]) == 0  && ft_is_space(src[i + 1]) == 1)
			word++;
		i++;
	}
	return (word);
}

int	main(void)
{
	printf("%d", word_count(""));
	return (0);
}
