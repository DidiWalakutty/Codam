/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   stacks.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/17 14:48:15 by diwalaku      #+#    #+#                 */
/*   Updated: 2023/05/19 16:56:41 by diwalaku      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
