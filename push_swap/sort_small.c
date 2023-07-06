/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_small.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/06 14:33:47 by diwalaku      #+#    #+#                 */
/*   Updated: 2023/07/06 16:00:54 by diwalaku      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

	// int first;
	// int	middle;
	// int	last;

	// first = (*a)->index;
	// middle = (*a)->next->index;
	// last = (*a)->next->next->index;
	// while (!already_sorted(*a))
	// {
	// 	if (first < high && )
	// }
	
	// or find biggest number/highest index. Index is sorted, but list is not.

void	sort_three(t_stack **a)
{

	t_stack	*highest;

	highest = find_highest(a);
	while (!already_sorted)
	{
		if (*a == highest)
			ra(a);
		else if ((*a)->next == highest)
			rra(a);
		if ((*a)->nb > (*a)->next->nb)
			sa(a);
	}
}

t_stack	*find_highest(t_stack *stack)
{
	t_stack *highest_node;
	int		value;

	value = INT_MIN;
	while (stack)
	{	
		if (stack->nb > value)
		{
			value = stack->nb;
			highest_node = stack;
		}	
		stack = stack->next;
	}
	return (highest_node);
}

void	small_sort(t_stack **a, t_stack **b)
{
	if (count_stack(*a) == 3 && !already_sorted(*a))
	{
		sort_three(a);
		return ;
	}
		
}