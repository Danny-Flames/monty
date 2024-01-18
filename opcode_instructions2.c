#include "monty.h"

/**
 * f__queue - this sets the format of the data to a queue (FIFO)
 *
 * @doubly: to hold the head of the linked list
 * @cline: reps the line number;
 * Return: has no return
 */
void f__queue(stack_t **doubly, unsigned int cline)
{
	(void)doubly;
	(void)cline;

	vglo.lifo = 0;
}

/**
 * _stack - this sets the format fo the data to a stack (LIFO)
 *
 * @doubly: the head of the linked list
 * @cline: reps the line number;
 * Return: has no return
 */
void _stack(stack_t **doubly, unsigned int cline)
{
	(void)doubly;
	(void)cline;

	vglo.lifo = 1;
}

/**
 * fl_add - this adds the top two elements of the stack
 *
 * @doubly: the head of the linked list
 * @cline: reps the line number;
 * Return: has no return
 */
void fl_add(stack_t **doubly, unsigned int cline)
{
	int m = 0;
	stack_t *aux = NULL;

	aux = *doubly;

	for (; aux != NULL; aux = aux->next, m++)
		;

	if (m < 2)
	{
		dprintf(2, "L%u: can't add, stack too short\n", cline);
		free_vglo();
		exit(EXIT_FAILURE);
	}

	aux = (*doubly)->next;
	aux->n += (*doubly)->n;
	__stack_pop(doubly, cline);
}

/**
 * fl_nop - this doesn't do anythinhg
 *
 * @doubly: reps the head of the linked list
 * @cline: reps the line number;
 * Return: has no return
 */
void fl_nop(stack_t **doubly, unsigned int cline)
{
	(void)doubly;
	(void)cline;
}

/**
 * fl_sub - this subtracts the top element to the second top element of the stack
 *
 * @doubly: the head of the linked list
 * @cline: has the line number;
 * Return: has no return
 */
void fl_sub(stack_t **doubly, unsigned int cline)
{
	int m = 0;
	stack_t *aux = NULL;

	aux = *doubly;

	for (; aux != NULL; aux = aux->next, m++)
		;

	if (m < 2)
	{
		dprintf(2, "L%u: can't sub, stack too short\n", cline);
		free_vglo();
		exit(EXIT_FAILURE);
	}

	aux = (*doubly)->next;
	aux->n -= (*doubly)->n;
	__stack_pop(doubly, cline);
}
