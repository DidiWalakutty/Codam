/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/04 22:07:15 by diwalaku      #+#    #+#                 */
/*   Updated: 2023/05/18 18:58:05 by diwalaku      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct t_node
{
	int				value;
	struct t_node	*next;
	struct t_node	*previous;
}	t_node;

typedef struct t_stack
{
	int		size;
	t_node	*top;
	t_node	*bottom;
}	t_stack;

// - stack stuff - //

t_stack	*create_stack(void);
t_stack *create_node(int value);

// - error - //

void	exit_error(void);

// - digits - //

int		check_arguments(char **argv);

#endif