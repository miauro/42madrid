/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 11:36:07 by mregueir          #+#    #+#             */
/*   Updated: 2025/02/07 20:42:26 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	unsigned char	miau;
	int				i;

	miau = (unsigned char)c;
	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == miau)
			return ((char *)&s[i]);
		i++;
	}
	if (miau == '\0')
		return ((char *)&s[i]);
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	const char str[] = "miauuumiau";
// 	const char ch = 'a';
// 	char *ret;
// 	ret = ft_strchr(str, ch);
// 	printf("String after %c is - %s\n", ch, ret);
// 	return (0);
// }