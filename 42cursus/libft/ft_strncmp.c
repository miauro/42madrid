/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 12:46:49 by mregueir          #+#    #+#             */
/*   Updated: 2025/01/21 13:07:09 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] != 0 && s2[i] != 0 && i < (n - 1))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
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
//    return 0;  
// }  
