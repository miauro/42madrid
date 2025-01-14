/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 09:12:10 by mregueir          #+#    #+#             */
/*   Updated: 2024/11/26 16:10:21 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_total(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	size_strs;
	int	size_sep;

	i = 0;
	size_sep = 0;
	size_strs = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != 0)
		{
			size_strs++;
			j++;
		}
		i++;
	}
	while (sep[size_sep] != 0)
	{
		size_sep++;
	}
	return ((size -1) * size_sep + size_strs);
}

char	*ft_strcat(char *dest, char *src)
	{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (dest[x] != 0)
	{
		x++;
	}
	while (src[y] != 0)
	{
		dest[x] = src[y];
		y++;
		x++;
	}
	dest[x] = 0;
	return (dest);
}

char	*blend(char **strs, char *sep, char *joint, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		joint = ft_strcat(joint, strs[i]);
		if (sep && i < (size - 1))
		{
			joint = ft_strcat(joint, sep);
		}
		i++;
	}
	return (joint);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*joint;

	if (size == 0)
	{
		joint = (char *)malloc(sizeof(char));
		joint[0] = 0;
	}
	else
	{
		joint = (char *)malloc(ft_total(size, strs, sep) * sizeof(char) + 1);
		if (!joint)
			return (0);
		joint[0] = 0;
		blend(strs, sep, joint, size);
	}
	return (joint);
}
/*
#include <stdio.h>
int main()
{
    char *strs[] = {"Hola", "me", "gusta", "el", "pollo"};
    char *sep = "+++";
    int size = 5;

    printf("Resultado: %s\n", ft_strjoin(size, strs, sep));

    return 0;
}*/
