/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/04 22:07:12 by diwalaku      #+#    #+#                 */
/*   Updated: 2023/06/23 19:54:47 by diwalaku      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	t_stack	total_nodes;

	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	stack_a = initialize_stack();
	stack_b = initialize_stack();
	if (!stack_a || !stack_b)
		return (1);
	if (!check_arguments(argv, stack_a))
		exit_error();
	if (!check_doubles(stack_a))
		exit_error();
	if (already_sorted(stack_a) == 1)
		return (0);
	total_nodes.nodecount_a = argc - 1;
	total_nodes.nodecount_b = 0;
	if (stack_a->nodecount_a <= 5)
		sort_small_stack(stack_a);
	else
		radix_sort(stack_a);
}
