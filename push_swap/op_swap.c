/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   op_swap.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/23 20:27:50 by diwalaku      #+#    #+#                 */
/*   Updated: 2023/06/23 20:46:25 by diwalaku      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_stack *stack)
{
	t_node	*temp;
	t_node	*first;
	t_node	*second;

	temp = stack->top;
	first = stack->top;
	second = first->next;

	if (!stack)
		exit_error;
	while (!already_sorted(stack))
	{
		
	}

}