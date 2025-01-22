/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:36:07 by mregueir          #+#    #+#             */
/*   Updated: 2025/01/21 12:34:11 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>
int main()
{
	const char str[] = "miauuumiau";
	const char ch = 'a';
	char *ret;
	ret = ft_strchr(str, ch);
	printf("String after %c is - %s\n", ch, ret);
	return (0);
}