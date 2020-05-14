#include "monty.h"

/**
 * _push - add new node
 * @stack: stack
 * @n: new node
 * Return: new node
 */

void _push(stack_t **stack, unsigned int line_number)
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

	//*stack = new_node;

	new_node->n = glob_vars;
	new_node->prev = NULL;
	if (tmp == NULL)
		new_node->next = NULL;
	else
	{
		new_node->next = tmp;
		//tmp->prev = *stack;
	}
	*stack = new_node;

    if (!new_node->next)
        new_node->next->prev = new_node;
}

/**
 * _pall - function
 * @stack: stack
 * @n: new node
 * Return: new node
 */

void _pall(stack_t **stack, unsigned int n)
{
    stack_t *tmp = *stack;

	if(!*stack)
		exit(EXIT_FAILURE);

	(void)n;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}