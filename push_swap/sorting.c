/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorting.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/20 19:55:58 by diwalaku      #+#    #+#                 */
/*   Updated: 2023/07/15 18:02:58 by diwalaku      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Find the minimum value among all un-indexed stacks.
// Checks if current > next and if it's indexed/unassigned or not.
// If so, current is bigger, so we set it to next since its value is smaller.
// If current is indexed, we set it to next. When we've done the whole stack and current == -1,
// we set its index to the current i, since it's the smallest value.
void	sort_index(t_stack **stack)
{
	t_stack	*start;
	t_stack	*current;
	int		i;

	i = 0;
	current = *stack;
	start = *stack;
	while (i < count_stacks(*stack))
	{
		start = *stack;
		while (start->next)
		{
			if (current->num > start->next->num && start->next->index == -1)
				current = start->next;
			else if (current->index != -1)
			{
				current = start->next;
			}
			start = start->next;
		}
		if (current->index == -1)
		{
			current->index = i;
			printf("current[index] is: %i[%i]\n", (int)current->num, (int)current->index);
		}
		current = *stack;
		i++;
	}
}

void	sort(t_stack **a, t_stack **b)
{
	int		length;

	printf("in sort\n");
	length = count_stacks(*a);
	if (length == 2)
		ra(a);
	else if (length == 3)
		sort_three(a);
	else if (length == 4)
		sort_four(a, b);
	else if (length == 5)
		sort_five(a, b);
// 	else if (length >= 6)
// 		radix_sort(a, b);
}
