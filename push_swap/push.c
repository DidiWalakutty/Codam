/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/04 13:45:13 by diwalaku      #+#    #+#                 */
/*   Updated: 2023/07/04 18:45:44 by diwalaku      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Push:
//	pa - push a -		Pushes the first element of stack b and puts it to first element of stack a.
//	pb - push b -		Pushes the first element of stack a and puts it to first element of stack b.

// Take first element at top of src and put at top dest.
// Do nothing if src is empty
static void	push(t_stack **src, t_stack **dest)
{
	t_stack	*target;

	if (!src)
		return ;
	target = *src;
	*src = (*src)->next;
	if (!dest)
	{
		*dest = target;
		(*dest)->next = NULL;
	}
	else
		add_front(dest, target);
}

void	pa(t_stack **b, t_stack **a)
{
	push(a, b);
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_stack **a, t_stack **b)
{
	push(b, a);
	ft_putstr_fd("pb\n", 1);
}
