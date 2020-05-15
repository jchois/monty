#include "monty.h"

/**
 * call_functions - select function to call
 * @op: getline, operator
 * 
 */

void (*call_opcodes(char *op, unsigned int line_number))(stack_t **stack, unsigned int line_number)
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
