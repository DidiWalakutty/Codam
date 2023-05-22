/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parsing.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/17 19:56:09 by diwalaku      #+#    #+#                 */
/*   Updated: 2023/05/22 21:10:01 by diwalaku      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// check if all arg[] (now *str) arguments are digits or -
// Shows exit_error in case it's not an int, > int MAX
int	check_validity(char *str, int *nb)
{
	int	i;

	i = 0;
	if (str[0] == '-')
	{
		if (!str[1])
			return (0);
		i++;
	}
	if (str[i] == '\0')
		exit_error();
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0)
		i++;
	}
	if (!atoi_and_overflow(str, nb))
		return (0);
	return (1);
}

// atoi, overflow and max-min numbers
// Whitespace before the numeric chars are typically ignored by atoi.
// It starts parsing the string from the first non-whitespace char.
int	atoi_and_overflow(char *str, int *nb)
{
	int	x;
	int	n;
	int	multx;

	x = 0;
	n = 0;
	multx = 1;
	while ((str[x] == '\t' || str[x] == '\n' || str[x] == '\v' || \
	str[x] == '\f' || str[x] == '\r' || str[x] == ' '))
		x++;
	if (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			multx *= -1;
		x++;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		n = (n * 10) + (str[x] - '0');
		x++;
	}
	if (s)
}
