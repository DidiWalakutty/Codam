/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/04 22:07:12 by diwalaku      #+#    #+#                 */
/*   Updated: 2023/06/18 20:59:01 by diwalaku      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack *stack_a;
	t_stack *stack_b;

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
	// check doubles
	// negative numbers
	// already sorted?
	// 
}
