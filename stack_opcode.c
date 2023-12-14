#include "monty.h"

/**
 * mul_nodes - Adds the top two elements of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @l_number: Interger representing the line number of of the opcode.
 */
void mul_nodes(stack_t **stack, unsigned int l_number)
{
	int sum;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		error1(8, l_number, "mul");

	(*stack) = (*stack)->next;
	sum = (*stack)->n * (*stack)->prev->n;
	(*stack)->n = sum;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}


/**
 * mod_nodes - Adds the top two elements of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @l_number: Interger representing the line number of of the opcode.
 */
void mod_nodes(stack_t **stack, unsigned int l_number)
{
	int sum;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)

		error1(8, l_number, "mod");


	if ((*stack)->n == 0)
		error1(9, l_number);
	(*stack) = (*stack)->next;
	sum = (*stack)->n % (*stack)->prev->n;
	(*stack)->n = sum;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
