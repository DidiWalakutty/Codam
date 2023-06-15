/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stacks.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/17 14:48:15 by diwalaku      #+#    #+#                 */
/*   Updated: 2023/06/15 17:37:46 by diwalaku      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Create_node will create a new node which takes int nb as the value of the new node.
// If the memory allocation is successful, the value of nb is assigned to the created node.
// The 'next'node is set to NULL, indicating that the next node is set to NULL.
// The function returns the 'node' pointer, which points to the newly created node.
// Short: This function sets the value of nb in new_node, and sets 'next' to NULL.
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

// Link_to_end adds a new_node to the end of a linked list.
// If top of stack is empty, it means ll is currently empty. We set top equal to new_node, so new_node is set as the first node in stack.
// We also set end to new_node, because it points to next (which is NULL).
// tmp will point to the same place as top does. We can now safely iterate without changing top.

//		old		//
// If the stack is not empty, it iterates through the list to find the last node.
// It starts by assigning the value of '*stack' to 'tmp_stack'.
// It enters a loop that continues until it reaches the last node in the list. If tmp_stack->next is not NULL,
// it means there's another node after it, so it updates 'tmp_stack' to point to the next node.
// After the loop, 'tmp_stack' points to the last node in the list. 'next' of 'tmp_stack' is updated to point to the new_node.
// Finally, the 'next' member of 'new_node' is set to NULL, indicating it's the last node of the list.
void	link_to_end(t_stack *stack, t_node *new_node)
{
	t_node	*tmp;

	if (!stack || !new_node)
		return ;
	if (!stack->top)
	{
		stack->top = new_node;
		stack->end = new_node;
	}
	else
	{
		// ended here with Gul
		tmp = stack->top;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
		new_node->next = NULL;
	}
}

// stack_a is beginpunt/voordeur van LL, next.
int	check_doubles(t_stack *stack_a)
{
	t_stack	*tmp;
	t_stack	*tmp_next;
	int		i;

	i = 0;
	tmp = stack_a;
	while ()
	
}

libft bonus - check hoe je het doet met ints ipv void