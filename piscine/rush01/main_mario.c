/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mregueir <mregueir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 18:40:31 by mregueir          #+#    #+#             */
/*   Updated: 2024/11/16 18:45:03 by mregueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
	{
	write(1, &c, 1);
}

void	ft_printerror(void)
	{
	write(1, "Error", 5);
}

int	sum_check(char *str)
	{
	int	i;
	int	error;

	i = 0;
	error = 0;
	while (str[i] != 0)
	{
		if (((i < 7) || ((i > 15) && (i < 23)))
			&& (((str[i] - '0') + (str[i + 8] - '0')) > 5))
			error = 1;
		if (((i < 7) || ((i > 15) && (i < 23)))
			&& (((str[i] - '0') + (str[i + 8] - '0')) < 3))
			error = 1;
		i = i + 2;
	}
	return (error);
}

int	ft_inputcheck(char *str)
	{
	int	i;
	int	error;

	error = 0;
	i = 0;
	while (str[i] != 0)
	{
		if (((i % 2) == 0) && (str[i] < '0' || str[i] > '4'))
			error++;
		if (((i % 2) != 0) && (str[i] != ' '))
			error ++;
		i++;
	}
	if (error > 0)
		return (1);
	else if (i != 31)
		return (1);
	else if (sum_check(str) == 1)
		return (1);
	else
		return (0);
}

int	main(int argc, char **argv)
	{
	if (argc != 2)
		ft_printerror();
	else if (ft_inputcheck(argv[1]) == 1)
		ft_printerror();
}
