/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/04 22:07:15 by diwalaku      #+#    #+#                 */
/*   Updated: 2023/06/23 20:28:52 by diwalaku      ########   odam.nl         */
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

typedef struct s_node
{
	int				nb;
	int				index;
	struct s_node	*next;
	//struct s_node	*prev;
}	t_node;

typedef struct s_stack
{
	size_t	nodecount_a;
	size_t	nodecount_b;
	t_node	*top;
	t_node	*bottom;
}	t_stack;

// - stacks and nodes - //

t_node	*create_node(int nb);
void	link_to_end(t_stack *stack, t_node *new_node);
int		check_doubles(t_stack *stack_a);
int		already_sorted(t_stack *stack_a);

// - error - //

void	exit_error(void);

// - parsing arguments - //

int		check_arguments(char **argv, t_stack *stack);
int		check_digits(char *str, int *nb);
int		atoi_and_overflow(char *str, int *nb);
t_stack	*initialize_stack(void);

// - sorting small stack - //

void	sort_small_stack (t_stack *stack_a);
void	sort_index(t_stack *stack_a);

// - sorting big stack - //

void	radix_sort(t_stack *stack_a);

// - operations - //



#endif
