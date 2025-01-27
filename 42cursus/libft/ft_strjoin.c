/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:50:41 by mregueir          #+#    #+#             */
/*   Updated: 2025/01/27 15:28:48 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_size(char const *s1, char const *s2)
{
	int	i;

	i = 0;
	while (s1[i] != 0)
		i++;
	while (s2[i] != 0)
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	int		i;
	int		j;

	i = 0;
	j = 0;
	s3 = (char *)malloc(i * ft_size(s1, s2));
	if (s3 == NULL)
		return (NULL);
	while (s1[i] != 0)
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j] != 0)
	{
		s3[i] = s2[j];
		i++;
		j++;
	}
	s3[i] = 0;
	return (s3);
}

// int	main(void)
// {
// 	printf("%s juntado con %s da %s", "mama", "mia", ft_strjoin("mama", "mia"));
// 	return (0);
// }