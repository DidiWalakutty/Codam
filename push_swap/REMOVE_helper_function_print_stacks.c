
#include "push_swap.h"

// Helper functions to print the stacks.

// Prints info (number and index) of chosen stack
void	print_stack(t_stack *stack)
{
	int	index;

	index = 0;
	while (stack)
	{
		printf("num[i]: %i[%i]\n", stack->num, stack->index);
		stack = stack->next;
		index++;
	}
}

// Prints info (number and index) of both stacks
void	print_both_stacks(t_stack *stack_a, t_stack *stack_b)
{
	printf("Stack A:\n");
	print_stack(stack_a);
	printf("Stack B:\n");
	print_stack(stack_b);
}