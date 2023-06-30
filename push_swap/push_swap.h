/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/04 22:07:15 by diwalaku      #+#    #+#                 */
/*   Updated: 2023/06/30 20:01:52 by diwalaku      ########   odam.nl         */
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

typedef struct s_node t_node;
typedef struct s_node t_stack;

typedef struct s_node
{
	int		nb;
	int		n_count;
	int		index;
	t_node	*next;
}	t_stack;

// typedef struct s_stack
// {
// 	size_t	nodecount_a;
// 	size_t	nodecount_b;
// 	t_node	*top;
// 	t_node	*bottom;
// }	t_stack;
// gebruik van top/bottom moet continu geupdate worden, beter lstlast


// - parsing arguments - //

bool	check_arguments(char **argv, t_stack *stack);
bool	check_digits(char *str, int *nb);
bool	atoi_and_overflow(char *str, int *nb);

// - stacks and nodes - //

t_stack	*create_node(int nb);
void	link_to_end(t_stack *stack, t_node *new_node);
bool	no_doubles(t_stack *stack_a);
bool	already_sorted(t_stack *stack_a);
int		count_nodes(t_stack *stack);
t_stack	*last_node(t_stack *stack);

// - error - //

void	exit_error(void);

// - sorting small stack - //

void	sort_small_stack (t_stack *stack_a, int n_count);
void	sort_index(t_stack *stack_a);

// - sorting big stack - //

void	radix_sort(t_stack *stack_a);

// - operations - //



#endif
