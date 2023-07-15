/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_small.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/06 14:33:47 by diwalaku      #+#    #+#                 */
/*   Updated: 2023/07/15 18:08:27 by diwalaku      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*find_highest(t_stack *stack)
{
	t_stack *highest_node;
	int		value;

	highest_node = stack;
	value = INT_MIN;
	while (stack)
	{	
		if (stack->num > value)
		{
			value = stack->num;
			highest_node = stack;
		}	
		stack = stack->next;
	}
	return (highest_node);
}

int	find_lowest_num(t_stack *stack)
{
	t_stack	*node;
	int		value;

	node = stack;
	value = node->num;
	while (node->next)
	{
		if (node->next->num < value)
			value = node->next->num;
		node = node->next;
	}
	return (value);
}

void	sort_three(t_stack **a)
{
	t_stack	*highest;

	highest = find_highest(*a);
	if (*a == highest)
		ra(a);
	else if ((*a)->next == highest)
		rra(a);
	if (check_sorted(a) == true)
		return ;
	sa(a);
}

void	sort_four(t_stack **a, t_stack **b)
{
	int		lowest_num;

	lowest_num = find_lowest_num(*a);
	while ((*a)->num != lowest_num)  
		ra(a);
	pb(a, b);
	sort_three(a);
	pa(b, a);
}

void	sort_five(t_stack **a, t_stack **b)
{
	int	lowest_num;

	lowest_num = find_lowest_num(*a);
	while ((*a)->num != lowest_num)  
		ra(a);
	pb(a, b);
	sort_four(a, b);
	pa(b, a);
}