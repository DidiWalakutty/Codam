/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/04 22:07:15 by diwalaku      #+#    #+#                 */
/*   Updated: 2023/06/15 17:35:30 by diwalaku      ########   odam.nl         */
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
}	t_node;

typedef struct s_stack
{
	int		size;
	struct s_stack *top;
	struct s_stack *end;
}	t_stack;


// - stack stuff - //

t_node	*create_node(int nb);
void	link_to_end(t_stack *stack, t_node *new_node);
int		check_doubles(t_stack *a);

// - error handling - //

void	exit_error(void);

// - parsing - //

int		check_arguments(char **argv, t_stack *stack);
int		check_digits(char *str, int *nb);
int		atoi_and_overflow(char *str, int *nb);

#endif
