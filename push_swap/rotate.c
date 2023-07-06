/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rotate.c                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/03 13:34:05 by diwalaku      #+#    #+#                 */
/*   Updated: 2023/07/06 19:08:02 by diwalaku      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Rotate:
//	ra - rotate a -		Shift up all elements of stack a by 1.
//	rb - rotate b -		Shift up all elements of stack b by 1.
//	rr - rotate both -	Shift up both at once.
//						First element becomes the last.

// Link_to_end places temp at last position in the stack and sets it's next to NULL.
static void	rotate(t_stack **stack)
{
	t_stack	*temp;

	if (count_stacks(*stack) <= 1)
		return ;
	temp = *stack;
	link_to_end(stack, temp);
	*stack = (*stack)->next;
	temp->next = NULL;
}

void	ra(t_stack **a)
{
	rotate(a);
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_stack **b)
{
	rotate(b);
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_stack **a, t_stack **b)
{
	rotate(a);
	rotate(b);
	ft_putstr_fd("rr\n", 1);
}
