/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stacks.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/17 14:48:15 by diwalaku      #+#    #+#                 */
/*   Updated: 2023/05/18 20:43:24 by diwalaku      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*create_stack(void)
{
	t_stack	stacker;

	stacker = (t_stack *)malloc(sizeof(t_stack));
	if (!stacker)
		return (NULL);
	stacker->size = 0;
	stacker->top = NULL;
	stacker->bottom = NULL;
	return (stacker);
}

t_node	*create_node(int value)
{
	t_node	next_node;

	next_node = (t_node *)malloc(sizeof(t_node));
	if (!next_node)
		return (NULL);
	next_node->value = value;
	next_node->next = NULL;
	next_node->previous = NULL;
	return (next_node);
}
