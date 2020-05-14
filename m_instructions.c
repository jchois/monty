#include "monty.h"

/**
 * call_functions - select function to call
 * @op: getline, operator
 * 
 */
void call_opcodes(stack_t **stack, char *op, unsigned int line_number)
{
    int i;

    instruction_t m_functions[] = {
        {"push", _push},
        {"pall", _pall},
        {NULL, NULL}
	};

    if (!op)
    {
        for (i = 0; m_functions[i].opcode; i++)
        {
            if (strcmp(op, m_functions[i].opcode) == 0)
            {
                m_functions[i].f(stack, line_number);
                return;
            }
        }

        if (strlen(op) != 0)
		{
			printf("L%u: unknown instruction %s\n", line_number, op);
			exit(EXIT_FAILURE);
		}
    }
}
