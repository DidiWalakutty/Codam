/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stacks_and_nodes.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/17 14:48:15 by diwalaku      #+#    #+#                 */
/*   Updated: 2023/06/23 19:27:29 by diwalaku      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// This function creates a new node that's set to the value of nb, and sets 'next' to NULL.
t_node	*create_node(int nb)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->nb = nb;
	new_node->next = NULL;
	return (new_node);
}

// This function adds the new node to the end.
// If top of stack is empty, stack is currently empty. New_node is set to top node. 
// Bottom is also set to new_node, because it points to next (which is NULL).
// tmp will point to the same place as top does. We can now safely iterate without changing top.

void	link_to_end(t_stack *stack, t_node *new_node)
{
	t_node	*temp;

	if (!stack || !new_node)
		return ;
	if (!stack->top)
	{
		stack->top = new_node;
		stack->bottom = new_node;
	}
	else
	{
		temp = stack->bottom;
		temp->next = new_node;
		new_node->next = NULL;
	}
}

t_stack	*initialize_stack(void)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->top = NULL;
	stack->bottom = NULL;
	return (stack);
}

// This function checks for doubles in the nodes.
// Stack_copy is the top of stack_a, temp is top->next of stack_a.
// while (temp), we check if the value of stack_copy is equal to the value of the node after it.
// If it's not, we select the node next to temp. When we checked those, we set stack_copy to the next one.
int	check_doubles(t_stack *stack_a)
{
	t_node	*stack_copy;
	t_node	*temp;

	stack_copy = stack_a->top;
	while (stack_copy)
	{
		temp = stack_copy->next;
		while (temp)
		{
			if (stack_copy->nb == temp->nb)
				exit_error();
			temp = temp->next;
		}
		stack_copy = stack_copy->next;
	}
	return (1);
}

int	already_sorted(t_stack *stack_a)
{
	t_node	*node_copy;
	t_node	*temp;

	node_copy = stack_a->top;
	while (node_copy)
	{
		temp = node_copy->next;
		if (node_copy->nb > temp->nb)
			return (0);
		node_copy = node_copy->next;
	}
	count_nodes(stack_a);
	return (1);
}
