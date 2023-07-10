/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: diwalaku <diwalaku@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/05/04 22:07:12 by diwalaku      #+#    #+#                 */
/*   Updated: 2023/07/10 19:53:24 by diwalaku      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	*a;
	t_stack	*b;
	
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	a = NULL;
	b = NULL;
	if (check_arguments(argv, &a) == false)
	{
		printf("problem with args\n");
		exit_error();
	}
	if (repeated_found(&a) == true)
	{
		printf("repeated found, error\n");
		exit_error();
	}
	if (check_sorted(&a) == true)
	{
		printf("is sorted, return 0\n");
		return (0);
	}
	sort_index(&a);
	// works up to sort_index
	sort(&a);
	printf("after sort function\n");
	return (1);
}
