#include "monty.h"

/**
 * call_functions - select function to call
 * @op: getline, operator
 * 
 */
int call_opcodes(char *op)
{
    instruction_t m_functions[] = {
        {"push", _push},
        {"pall" _pall},
        {NULL, NULL}
	};

    

}
