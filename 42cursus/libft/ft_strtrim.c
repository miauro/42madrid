/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:43:06 by mregueir          #+#    #+#             */
/*   Updated: 2025/02/09 11:13:25 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_isset(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i] != 0)
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_size(char const *s1, const char *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[j] != 0)
		j++;
	while (ft_isset(set, s1[i]) == 1)
		i++;
	while (j > i && ft_isset(set, s1[j - 1]) == 1)
		j--;
	return (j - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*st;
	int		size;
	int		j;

	size = ft_size(s1, set);
	i = 0;
	j = 0;
	st = (char *)malloc((size + 1) * sizeof(char));
	if (st == NULL)
		return (NULL);
	while (ft_isset(set, s1[i]) == 1)
		i++;
	while (j < size)
	{
		st[j] = s1[i];
		i++;
		j++;
	}
	st[j] = 0;
	return (st);
}

// int	main(void)
// {
// 	char *st = ft_strtrim("-- --    -miau- - - --", "- ");
// 	printf("%s", st);
// 	return (0);
// }