/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorting.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/20 19:55:58 by diwalaku      #+#    #+#                 */
/*   Updated: 2023/06/23 19:54:49 by diwalaku      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// laagste getal in lijst, = index[0]
// enalaagste getal in lijst, = index[1]

void	sort_index(t_stack *stack_a)
{

}

void	sort_small_stack (t_stack *stack_a)
{
	sort_index(stack_a);
	if (stack_a->nodecount_a == 2 && !already_sorted(stack_a))
		// rotate stack a
	else if (stack_a->nodecount_a == 3 && !already_sorted(stack_a))
		// sort stack of 3
	else if ((stack_a->nodecount_a == 4 || stack_a->nodecount_a == 5) && \
	!already_sorted(stack_a))
		// sort stack of 4 or 5
}

