/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/04 22:07:12 by diwalaku      #+#    #+#                 */
/*   Updated: 2023/05/30 18:46:15 by diwalaku      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack stack;

	if (argc < 2)
		exit(1);
	stack.a = NULL;
	stack.b = NULL;
	if (!stack.a || !stack.b)
		exit_error();
	if (!check_arguments(argv, &stack))
		exit_error();
	
}
