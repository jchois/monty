#include "monty.h"

/**
 *add - sum number
 *@stack:top of the stack
 *@line_number: thenumber of the command 
 *Return: void
 */

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	int sum;

	if (stack == NULL || !temp || temp->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	sum = temp->n + temp->prev->n;
	temp->prev->n = sum;
	temp->prev->next = NULL;

	free(temp);
}

/**
 *swap - swaps the top two values 
 *@stack: top of the stack
 *@line_number: the line number of the command 
 *Return: void
 */
 
void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	int swap_tmp;

	if (temp == NULL || temp->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	swap_tmp = temp->n;
	temp->n = temp->prev->n;
	temp->prev->n = swap_tmp;
}