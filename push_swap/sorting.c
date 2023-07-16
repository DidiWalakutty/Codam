/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sorting.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/06/20 19:55:58 by diwalaku      #+#    #+#                 */
/*   Updated: 2023/07/16 19:18:37 by diwalaku      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

void	radix_sort(t_stack **a, t_stack **b)
{
	int	i;
	int	x;
	int	max_bits;
	int	length;

	x = 0;
	length = count_stacks(*a);
	max_bits =	find_max_bits(length);
	i = 0;
	while (i < )
}

void	sort(t_stack **a, t_stack **b)
{
	int		length;

	length = count_stacks(*a);
	if (length == 2)
		ra(a);
	else if (length == 3)
		sort_three(a);
	else if (length == 4)
		sort_four(a, b);
	else if (length == 5)
		sort_five(a, b);
	else if (length >= 6)
		radix_sort(a, b);
}
