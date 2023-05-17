/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stacks.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/17 14:48:15 by diwalaku      #+#    #+#                 */
/*   Updated: 2023/05/17 20:08:58 by diwalaku      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*create_stack(void)
{
	t_stack stacker;

	stacker = (t_stack *)malloc(sizeof(t_stack));
	if (!stacker)
		return (NULL);
	stacker->size = 0
	stacker->top = NULL;
	stacker->bottom = NULL;
	return (stacker);
}

t_node	*create_node(int value)
{
	t_node	node;

	node = (t_node *)malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->value = value;
	node->next = NULL;
	node->previous = NULL;
	return (node);
}

