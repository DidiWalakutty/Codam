/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/04 22:07:15 by diwalaku      #+#    #+#                 */
/*   Updated: 2023/07/10 20:22:52 by diwalaku      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include <stdbool.h>

typedef struct s_stack
{
	int				nb;
	int				index;
	struct s_stack	*next;
}	t_stack;

// - parsing arguments - //

bool	check_arguments(char **argv, t_stack **stack);
bool	check_digits(char *str, int *nb);
bool	atoi_and_overflow(char *str, int *nb);
bool	repeated_found(t_stack **stack);
bool	check_sorted(t_stack **stack);

// - stack utils - //

t_stack	*create_stack(int nb);
void	link_to_end(t_stack **stack, t_stack *new);
t_stack	*last_stack(t_stack *stack);
void	add_front(t_stack **stack, t_stack *new);
int		count_stacks(t_stack *stack);

// - error - //

void	exit_error(void);

// - index and sort - //

void	sort_index(t_stack **stack);
void	sort(t_stack **a); //, t_stack **b);
void	sort_three(t_stack **a);

// - operations - //

void	ra(t_stack **a);
void	rb(t_stack **a);
void	rr(t_stack **a, t_stack **b);

void	sa(t_stack **a);
void	sb(t_stack **b);
void	ss(t_stack **a, t_stack **b);

void	rra(t_stack **a);
void	rrb(t_stack **b);
void	rrr(t_stack **a, t_stack **b);

void	pa(t_stack **b, t_stack **a);
void	pb(t_stack **a, t_stack **b);

//remove soon

void print_stack(t_stack **stack);
#endif
