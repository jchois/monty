#include "monty.h"

/**
 *add - sum number
 *@stack:top of the stack
 *@line_number: thenumber of the command
 *Return: void
 */

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	int sum;

	if (stack == NULL || !tmp || tmp->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	sum = tmp->n + tmp->prev->n;
	tmp->prev->n = sum;
	tmp->prev->next = NULL;

	free(tmp);
}

/**
 *swap - swaps the top two values
 *@stack: top of the stack
 *@line_number: the line number of the command
 *Return: void
 */

void swap(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	int swap_tmp;

	if (tmp == NULL || tmp->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	swap_tmp = tmp->n;
	tmp->n = tmp->prev->n;
	tmp->prev->n = swap_tmp;

}
