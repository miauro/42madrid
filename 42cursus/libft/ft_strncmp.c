/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 12:46:49 by mregueir          #+#    #+#             */
/*   Updated: 2025/02/07 20:54:28 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	else
	{
		while ((unsigned char)s1[i] != 0 && (unsigned char)s2[i] != 0 && i < (n
				- 1))
		{
			if ((unsigned char)s1[i] != (unsigned char)s2[i])
				return ((unsigned char)s1[i] - (unsigned char)s2[i]);
			i++;
		}
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
}

// int main()
// {
//    char str_1[] = "";
//    char str_2[] = "a";
//    if (ft_strncmp(str_1, str_2, 2) == 0)
//    {
//       printf("The strings '%s' and '%s' are equal.\n", str_1, str_2);
//    }
//    else
//    {
//       printf("The strings '%s' and '%s' are not equal.\n", str_1, str_2);
//    }
//    return (0);
// }
