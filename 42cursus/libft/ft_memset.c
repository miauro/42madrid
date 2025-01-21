/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 13:13:56 by mregueir          #+#    #+#             */
/*   Updated: 2025/01/21 13:41:44 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *ptr, int c, size_t num)
{
	size_t				i;
	char				*p;
	unsigned char		thing;

	p = ptr;
	thing = (unsigned char)c;
	i = 0;
	while (i < num)
	{
		p[i] = thing;
		i++;
	}
	return (ptr);
}

// int main ()
// {
//   char str[] = "almost every programmer should know memset!";
//   ft_memset (str,'-',sizeof(str));
//   puts (str);
//   return 0;
// }