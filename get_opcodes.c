#include "monty.h"

/**
 * get_opcodes - this will select the correct opcode to perform
 * @opc: opcode passed into
 *
 * Return: will return the pointer to the function that executes the opcode
 */
void (*get_opcodes(char *opc))(stack_t **stack, unsigned int line_number)
{
	instruction_t instruct[] = {
		{"push", __stack_push},
		{"pall", __stack_pall},
		{"pint", __stack_pint},
		{"pop", __stack_pop},
		{"swap", __node_swap},
		{"queue", f__queue},
		{"stack", _stack},
		{"add", fl_add},
		{"nop", fl_nop},
		{"sub", fl_sub},
		{"mul", fl_mul},
		{"div", fl_div},
		{"mod", fl_mod},
		{"pchar", fl_pchar},
		{"pstr", fl_pstr},
		{"rotl", fl_rotl},
		{"rotr", fl_rotr},
		{NULL, NULL}
	};
	int i;

	for (i = 0; instruct[i].opcode; i++)
	{
		if (_strcmp(instruct[i].opcode, opc) == 0)
			break;
	}

	return (instruct[i].f);
}
