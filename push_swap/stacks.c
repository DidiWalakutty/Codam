/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stacks.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/17 14:48:15 by diwalaku      #+#    #+#                 */
/*   Updated: 2023/05/31 21:38:58 by diwalaku      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Create_node will create a new node which takes int nb as the value of the new node.
// If the memory allocation is successful, the value of nb is assigned to the created node.
// The 'next'node is set to NULL, indicating that the next node is set to NULL.
// The function returns the 'node' pointer, which points to the newly created node.
// Short: This function sets the value of nb in a new node, and sets 'next' to NULL.
t_stack	*create_node(int nb)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->nb = nb;
	node->next = NULL;
	return (node);
}

// Link_to_end adds a new_node to the end of a linked list.
// The parameters 'stack' is a **pointer to the head of the linked list.
// If stack is empty, the l_l is currently empty, and new_node becomes the first node.
// The *stack pointer is updated to the new_node, and the 'next'member of new_node is set to NULL (end of list).
// If the stack is not empty, it iterates through the list to find the last node.
// It starts by assigning the value of '*stack' to 'tmp_stack'.
// It enters a loop that continues until it reaches the last node in the list. If tmp_stack->next is not NULL,
// it means there's another node after it, so it updates 'tmp_stack' to point to the next node.
// After the loop, 'tmp_stack' points to the last node in the list. 'next' of 'tmp_stack' is updated to point to the new_node.
// Finally, the 'next' member of 'new_node' is set to NULL, indicating it's the last node of the list.
void	link_to_end(t_stack **stack, t_stack *new_node)
{
	t_stack	*tmp_stack;

	if (!stack || !new_node)
		return ;
	if (!*stack) 
	{
		*stack = new_node;
		// (*stack)->next = NULL;
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
