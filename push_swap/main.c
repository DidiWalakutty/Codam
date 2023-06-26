/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/04 22:07:12 by diwalaku      #+#    #+#                 */
/*   Updated: 2023/06/26 23:13:43 by diwalaku      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		n_count;

	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	stack_a = NULL;
	stack_b = NULL;
	if (check_arguments(argv, stack_a) == false)
		exit_error();
	if (no_doubles(stack_a) == false)
		exit_error();
	if (already_sorted(stack_a) == true)
		return (0);
	if (count_nodes(stack_a, &n_count) <= 5)
		sort_small_stack(stack_a, n_count);
	else
		radix_sort(stack_a);
}

// mogelijk: aparte functies voor counting nodes en last_node
