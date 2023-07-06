/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorting.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/20 19:55:58 by diwalaku      #+#    #+#                 */
/*   Updated: 2023/07/06 15:42:13 by diwalaku      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Find the minimum value among all un-indexed stacks.
// Checks if current > next and if it's indexed/unassigned or not.
// If so, current is bigger, so we set it to next since its value is smaller.
// If current is indexed, we set it to next. When we've done the whole stack and current == -1,
// we set its index to the current i, since it's the smallest value.
void	sort_index(t_stack *stack)
{
	t_stack	*start;
	t_stack	*current;
	int		i;

	i = 0;
	current = stack;
	start = stack;
	while (i < count_stacks(stack))
	{
		start = stack;
		while (start->next)
		{
			if (current->nb > start->next->nb && start->next->index == -1)
				current = start->next;
			else if (current->index != -1)
				current = start->next;
			start = start->next;
		}
		if (current->index == -1)
			current->index = i;
		current = stack;
		i++;
	}
}

void	sort(t_stack **a, t_stack **b)
{
	int	length;

	length = count_stacks(*a);
	if (length == 2)
		ra(a);
	else if (length == 3)
		sort_three(a);
	else if (length == 4) // up to length??
		small_sort(a);
	else
		radix_sort(a);
}
