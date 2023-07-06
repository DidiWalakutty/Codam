/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/04 22:07:12 by diwalaku      #+#    #+#                 */
/*   Updated: 2023/07/06 19:20:21 by diwalaku      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;

	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	a = NULL;
	b = NULL;
	if (check_arguments(argv, &a) == false)
		exit_error();
	if (repeated_found(&a) == true)
		exit_error();
	// already_sorted not working properly
	if (already_sorted(&a) == true)
	{
		printf("sorted\n");
		return (0);
	}
	// sort_index(a);
	// sort(&a, &b);
}
