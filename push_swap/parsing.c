/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parsing.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/17 19:56:09 by diwalaku      #+#    #+#                 */
/*   Updated: 2023/06/30 20:01:48 by diwalaku      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// check if all arg[] (now *str) arguments are digits or -
// if str_len > 11, it's already be bigger than int max/min
bool	check_digits(char *str, int *nb)
{
	int	i;

	i = 0;
	if (ft_strlen(str) > 11)
		return (false);
	if (str[0] == '-')
	{
		if (!str[1])
			return (false);
		i++;
	}
	if (str[i] == '\0')
		exit_error();
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (false);
		i++;
	}
	if (!atoi_and_overflow(str, nb) == false)
		return (false);
	return (true);
}

// atoi, overflow and max-min numbers.
// Start parsing the string from the first non-whitespace char.
// INT_MIN is -...648, INT_MAX is ...647, but in case of INT_MIN (-), we still need to multx it with -1.
// At first, the int will be bigger than INT_MAX (...648 instead of the max ...647), so I made it an edgecase.
// the multx=1 check is in case the string is bigger that INT_MAX. It'll also automatically turn nb in a negative (overflow).
bool	atoi_and_overflow(char *str, int *nb)
{
	int	x;
	int	multx;

	*nb = 0;
	x = 0;
	multx = 1;
	while ((str[x] >= 9 && str[x] <= 13) || str[x] == 32)
		x++;
	if (str[x] == '-')
	{
			multx *= -1;
		x++;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		*nb += str[x] - '0';
		if (*nb < 0 && (*nb != INT_MIN || multx == 1))
			exit_error();
		if (str[x + 1] >= '0' && str[x + 1] <= '9')
			*nb *= 10;
		x++;
	}
	*nb *= multx;
	return (true);
}

// This function parses the arguments through the function check_digits to
// check if the passed arguments are indeed digits and converts it to integers (atoi).
// If that worked, it'll link nodes to eachother to create the stack.
// Create_node will create a node with the given nb from check_digits.
// Then link_to_end is called to link the new node to the end of the list/stack.
bool	check_arguments(char **argv, t_stack *stack)
{
	int	i;
	int	nb;

	i = 1;
	while (argv[i])
	{
		if (check_digits(argv[i], &nb) == false)
			return (false);
		link_to_end(stack, create_node(nb));
		i++;
	}
	return (true);
}
