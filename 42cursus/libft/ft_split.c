/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:23:51 by mregueir          #+#    #+#             */
/*   Updated: 2025/02/09 12:45:28 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_wordcount(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] != 0)
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			words++;
		i++;
	}
	return (words);
}

void	ft_free(char **mat, int words)
{
	while (words > 0)
	{
		free(mat[words - 1]);
		words--;
	}
	free(mat);
}

char	*ft_nextword(char const *s, int *j, char c)
{
	int	start;
	int	end;

	while (s[*j] == c && s[*j] != 0)
		(*j)++;
	start = *j;
	while (s[*j] != c && s[*j] != 0)
		(*j)++;
	end = *j;
	if (end > start)
		return (ft_substr(s, start, end - start));
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**mat;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	mat = (char **)malloc((ft_wordcount(s, c) + 1) * sizeof(char *));
	if (mat == NULL)
		return (NULL);
	while (i < ft_wordcount(s, c))
	{
		mat[i] = ft_nextword(s, &j, c);
		if (!mat[i])
		{
			ft_free(mat, i);
			return (NULL);
		}
		i++;
	}
	mat[i] = 0;
	return (mat);
}

// int	main(void)
// {
// 	char str[] = "";
// 	char c = ' ';
// 	char **result;
// 	int i = 0;

// 	result = ft_split(str, c);

// 	while (result[i])
// 	{
// 		printf("Palabra %d: %s\n", i, result[i]);
// 		i++;
// 	}

// 	return (0);
// }