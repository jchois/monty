#include "monty.h"

/**
 * opc - select function to call
 * @op: getline, operator
 * @line_number: line_number parameter
 * Return: void
 */

void (*opc(char *op, unsigned int line_number))(stack_t **stack, unsigned int)
{
	unsigned int i;

	instruction_t m_functions[] = {
		{"push", _push},
		{"pall", _pall},
		{NULL, NULL}
	};


	for (i = 0; m_functions[i].opcode != NULL; i++)
	{
		if (strcmp(op, m_functions[i].opcode) == 0)
		{
			return (m_functions[i].f);
		}
	}

	fprintf(stderr, "L%u: unknown instruction %s\n", line_number, op);
	exit(EXIT_FAILURE);
}
