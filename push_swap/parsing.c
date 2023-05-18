/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parsing.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/17 19:56:09 by diwalaku      #+#    #+#                 */
/*   Updated: 2023/05/18 17:30:41 by diwalaku      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int d)
{
	if (d >= '0' && d <= '9')
		return (1);
	return (0);
}

// check if all arguments are digits or -
int	check_arguments(char **argv)
{
	int	count;
	int	i;

	count = 1;
	while (argv[count])
	{
		i = 0;
		while (argv[count][i])
		{
			if (ft_isdigit(argv[count][i]) || argv[count][i] == '-')
				i++;
			else
				exit_error();
		}
		count++;
		printf("next count\n");
	}
	printf("done\n");
	return (1);
}
