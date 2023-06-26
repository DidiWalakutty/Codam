/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorting_small.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/20 19:55:58 by diwalaku      #+#    #+#                 */
/*   Updated: 2023/06/26 23:16:51 by diwalaku      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// laagste getal in lijst, = index[0]
// enalaagste getal in lijst, = index[1]

void	sort_index(t_stack *stack_a)
{
	// werk met low = int_min en high = int_max, evt long int = int min -1
	// if temp > int min && temp < max, update
}

void	sort_small_stack (t_stack *stack_a, int n_count)
{
	sort_index(stack_a);
	if (stack_a->n_count == 2 && !already_sorted(stack_a))
		// rotate stack a
	else if (stack_a->n_count == 3 && !already_sorted(stack_a))
		// sort stack of 3
	else if ((stack_a->n_count == 4 || stack_a->n_count == 5) && \
	!already_sorted(stack_a))
		// sort stack of 4 or 5
}

