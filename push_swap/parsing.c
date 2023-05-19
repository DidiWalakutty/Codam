/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parsing.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/17 19:56:09 by diwalaku      #+#    #+#                 */
/*   Updated: 2023/05/19 22:01:18 by diwalaku      ########   odam.nl         */
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
//
int	atoi_and_overflow(char *str, int *nb)
{

}
