/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/04 22:07:12 by diwalaku      #+#    #+#                 */
/*   Updated: 2023/05/31 21:42:29 by diwalaku      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack *a;
	t_stack *b;

	if (argc < 2)
		exit(1);
	a = NULL;
	b = NULL;
	// if (!a || !b)
	// 	exit_error();
	if (!check_arguments(argv, a))
		exit_error();
	// negatieve nummers
	// gesorteerd?
	// 
}
