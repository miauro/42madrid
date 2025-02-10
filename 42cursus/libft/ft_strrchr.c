/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 12:35:11 by mregueir          #+#    #+#             */
/*   Updated: 2025/02/10 20:17:13 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*temp;
	char	input;

	input = (char)c;
	temp = 0;
	i = 0;
	while (s[i] != 0)
	{
		if (s[i] == input)
			temp = ((char *)&s[i]);
		i++;
	}
	if (input == '\0')
		temp = ((char *)&s[i]);
	return (temp);
}

// #include <stdio.h>
// int main ()
// {
//    const char str[] = "miauuumiau";
//    const char ch = 'u';
//    char *ret;
//    ret = ft_strchr(str, ch);
//    printf("String after last %c is - %s\n", ch, ret);
//    return(0);
// }