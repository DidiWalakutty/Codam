/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stacks.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/17 14:48:15 by diwalaku      #+#    #+#                 */
/*   Updated: 2023/05/30 22:06:54 by diwalaku      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Create_node will create a new node which takes int nb as the value of the new node.
// If the memory allocation is successful, the value of nb is assigned to the created node.
// The 'next'node is set to NULL, indicating that the next node is set to NULL.
// The function returns the 'node' pointer, which points to the newly created node.
// Short: This function sets the value of nb in a new node, and sets 'next' to NULL.
t_node	*create_node(int nb)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->nb = nb;
	node->next = NULL;
	return (node);
}

// Link_to_end checks whether the stack exists, if not, but new_node does, it'll create one.
// If one does exist, it's added to end of the list.
void	*link_to_end(t_node **stack, t_node *new_node)
{
	t_node	*tmp_stack;

	if (!stack || !new_node)
		return ;
	if (!*stack) 
	{
		*stack = new_node;
		(*stack)->next = NULL;
	}
	else
	{
		tmp_stack = *stack;
		while (tmp_stack->next != NULL)
			tmp_stack = tmp_stack->next;
		tmp_stack->next = new_node;
		new_node->next = NULL;
	}

}








// t_stack	*create_stack(void)
// {
// 	t_stack	*stacker;

// 	stacker = ft_calloc(1, sizeof(t_stack));
// 	if (!stacker)
// 		return (NULL);
// 	stacker->size = 0;
// 	stacker->top = NULL;
// 	stacker->bottom = NULL;
// 	return (stacker);
// }

// t_node	*create_link(int value)
// {
// 	t_node	next_link;

// 	next_link = (t_node *)malloc(sizeof(t_node));
// 	if (!next_link)
// 		return (NULL);
// 	next_link->value = value;
// 	next_link->next = NULL;
// 	next_link->previous = NULL;
// 	return (next_link);
// }
