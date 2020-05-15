#include "monty.h"
/**
 * _push - add new node
 * @stack: stack
 * @line_number: line_number parameter
 * Return: void
 */
void _push(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	stack_t *new_node;
	stack_t *tmp;

	new_node =  malloc(sizeof(stack_t));
	tmp = *stack;
	if (new_node == NULL)
	{
		printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	while (tmp != NULL && tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	if (tmp)
	{
		new_node->n = glob_vars.glob_int;
		new_node->next = NULL;
		tmp->next = new_node;
		new_node->prev = tmp;
	}
	else
	{
		*stack = new_node;
		new_node->n = glob_vars.glob_int;
		new_node->next = NULL;
		new_node->prev = NULL;
	}
}

/**
 * _pall - function
 * @stack: stack
 * @n: new node
 * Return: new node
 */
void _pall(stack_t **stack, __attribute__((unused)) unsigned int n)
{
	stack_t *tmp = *stack;

	if (!*stack)
		exit(EXIT_FAILURE);
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->prev;
	}
}
