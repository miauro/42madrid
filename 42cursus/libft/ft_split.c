/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:23:51 by mregueir          #+#    #+#             */
/*   Updated: 2025/01/28 17:41:52 by mregueir         ###   ########.fr       */
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
	if (s[i] == 0)
		return (0);
	if (s[i] != c && s[i] != 0)
		words++;
	while (s[i] != 0)
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != 0)
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
	int	k;
	int	miau;

	miau = *j;
	k = 0;
	while (s[miau] == c && s[miau] != 0)
		miau++;
	while (s[miau] != c && s[miau] != 0)
	{
		miau++;
		k++;
	}
	*j = miau;
	return (ft_substr(s, (miau - k), k));
}

char	**ft_split(char const *s, char c)
{
	char	**mat;
	int		i;
	int		j;
	int		words;

	words = ft_wordcount(s, c);
	i = 0;
	j = 0;
	mat = (char **)malloc((words + 1) * sizeof(char *));
	if (!s || mat == NULL)
		return (NULL);
	while (i < ft_wordcount(s, c))
	{
		mat[i] = ft_nextword(s, &j, c);
		if (!mat[i])
			ft_free(mat, words);
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