/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parsing.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/17 19:56:09 by diwalaku      #+#    #+#                 */
/*   Updated: 2023/05/24 20:59:24 by diwalaku      ########   odam.nl         */
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

// atoi, overflow and max-min numbers.
// Start parsing the string from the first non-whitespace char, because whitespace is ignored in atoi.
// INT_MIN is -...648, INT_MAX is ...647, but in case of INT_MIN (-), we still need to multx it with -1.
// At first, the int will be bigger than INT_MAX (...648 instead of the max ...647), so I made it an edgecase.
// the multx=1 check is in case the string is bigger that INT_MAX. It'll also automatically turn nb in a negative (overflow).
int	atoi_and_overflow(char *str, int *nb)
{
	int	x;
	int	multx;

	*nb = 0;
	x = 0;
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
		*nb += str[x] - '0';
		if (*nb < 0 && (*nb != INT_MIN || multx = 1))
			exit_error();
		if (str[x + 1] >= '0' && str[x + 1] <= '9')
			*nb *= 10;
		x++;
	}
	*nb *= multx;
	return (1);
}
