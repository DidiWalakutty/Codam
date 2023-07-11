/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_small.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/06 14:33:47 by diwalaku      #+#    #+#                 */
/*   Updated: 2023/07/11 21:43:22 by diwalaku      ########   odam.nl         */
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
		if (stack->nb > value)
		{
			value = stack->nb;
			highest_node = stack;
		}	
		stack = stack->next;
	}
	return (highest_node);
}

t_stack	*find_lowest(t_stack *stack)
{
	t_stack	*lowest_node;
	int		value;

	lowest_node = stack;
	value = INT_MAX;
	while (stack)
	{
		if (stack->nb < value)
		{
			value = stack->nb;
			lowest_node = stack;
		}
		stack = stack->next;
	}
	return (lowest_node);
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
	//t_stack	*lowest;
	int		i;

	// lowest = find_lowest(*a);
	// pb(&lowest, b);
	// 	while (*a != lowest)
	// {
	// 	printf("in a != lowest\n");
	// 	*a = (*a)->next;
	// 	printf("next is now: %i[%i]\n", (int)(*a)->nb, (int)(*a)->index);
	// }

	i = count_stacks(*a);
	while (i--)
	{
		printf("1. before a->index is now: %i[%i]\n", (int)(*a)->nb, (int)(*a)->index);
		if ((*a)->index == 0)
		{
			printf("2. a->index is now: %i[%i]\n", (int)(*a)->nb, (int)(*a)->index);
			pb(a, b);
		}
		else
		{
			ra(a);
			printf("2. a->index is now: %i[%i]\n", (int)(*a)->nb, (int)(*a)->index);
		}
	}

	// printf("1. a->index is: %i[%i]\n", (int)(*a)->next->nb, (int)(*a)->next->index);
	// printf("2. a->index is: %i[%i]\n", (int)(*a)->next->nb, (int)(*a)->next->next->index);
	// printf("3. a->index is: %i[%i]\n", (int)(*a)->next->next->nb, (int)(*a)->next->next->index);
	// printf("4. a->index is: %i[%i]\n", (int)(*a)->next->next->next->nb, (int)(*a)->next->next->next->index);
	// pb(a, b);
	
	// sort_three(a);
	// pa(b, a);

	// or 

	// while (i--)
	// {
	// 	if ((*a)->index == 0)
	// 		pb(a, b);
	// }




	// while (a != )
	// pb(a, b);
	// while (i < count_stacks(*a))
	// {
	// 	if ((*a)->index == 0 || (*a)->index == 1)
	// 		pb(a, b);
	// 	else
	// 		ra(a);
	// 	i++;
	// }
	// printf("after while loop\n");
	// sort_three(a);
	// pa(b, a);
	// pa(b, a);
	// if ((*a)->index > (*a)->next->index)
	// 	sa(a);
}