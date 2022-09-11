/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mperger <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 17:37:22 by mperger           #+#    #+#             */
/*   Updated: 2022/09/10 17:37:25 by mperger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	*ft_str_is_numeric(char *str, int *new);
int	wrong_input(char *str);
void array(int *outer);

int	main(int ac, char **av)
{
	int	*new;
	int	test;

	if (ac == 2)
	{
		new = (int *) malloc(64);
		if (wrong_input(av[1]))
		{
			write(1, "you suck\n", 9);
			return (0);
		}
		ft_str_is_numeric(av[1], new);
		test = 0;
		while (new[test])
		{
			printf("%d", new[test]);
			test++;
		}
		printf("\n");
		array(new);
	}
}

int	wrong_input(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		if (str[counter] < '1' || str[counter] > '4')
			return (1);
		counter++;
	}
	if(counter != 31)
		return (1);
	return (0);
}

int	*ft_str_is_numeric(char *str, int *new)
{
	int	counter;
	int	newlen;

	counter = 0;
	newlen = 0;
	while (str[counter])
	{
		if (str[counter] > '0' && str[counter] <= '4')
		{
			new[newlen] = str[counter] - '0';
			counter++;
			newlen++;
		}
		else
		{
			counter++;
		}
	}
	return (new);
}
