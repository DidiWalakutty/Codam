/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/04 22:07:15 by diwalaku      #+#    #+#                 */
/*   Updated: 2023/06/20 18:29:21 by diwalaku      ########   odam.nl         */
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
	struct s_node	*next;
	//struct s_node	*prev;
}	t_node;

typedef struct s_stack
{
	t_node	*top;
	t_node	*bottom;
}	t_stack;

// - stack and node stuff - //

t_node	*create_node(int nb);
void	link_to_end(t_stack *stack, t_node *new_node);
int		check_doubles(t_stack *stack_a);
int		already_sorted(t_stack *stack_a);

// - error handling - //

void	exit_error(void);

// - parsing - //

int		check_arguments(char **argv, t_stack *stack);
int		check_digits(char *str, int *nb);
int		atoi_and_overflow(char *str, int *nb);
t_stack	*initialize_stack(void);

#endif
