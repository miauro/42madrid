/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:23:51 by mregueir          #+#    #+#             */
/*   Updated: 2025/01/27 17:48:24 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_wordsize(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != 0)
		i++;
	return (i + 1);
}

char	**ft_split(char const *s, char c)
{
	char	**mat;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	mat = (char **)malloc((ft_wordcount(s, c) + 1) * sizeof(char *));
	if (mat == NULL)
		return (NULL);
	while (i <= ft_wordcount(s, c))
	{
		k = 0;
		while (s[j] == c)
			j++;
		mat[i] = (char *)malloc((ft_wordsize(&s[j], c) + 1) * sizeof(char));
		if (mat[i] == NULL)
			return (NULL);
		while (s[j] != 0 && s[j] != c)
		{
			mat[i][k] = s[j];
			k++;
			j++;
		}
		mat[i][k] = 0;
		i++;
	}
	mat[i] = 0;
	return (mat);
}

int	main(void)
{
	char const *s = "ey          tio    que    pasa";
	char **matriz = ft_split(s, ' ');
	printf("%s\n%s\n%s\n%s", matriz[0], matriz[1], matriz[2], matriz[3]);
	return (0);
}