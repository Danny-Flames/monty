#include "monty.h"

/**
 * fl_div - this divides the second element by the top element of the stack
 *
 * @doubly: here's the head of the linked list
 * @cline: reps the line number;
 * Return: has no return
 */
void fl_div(stack_t **doubly, unsigned int cline)
{
	int m = 0;
	stack_t *aux = NULL;

	aux = *doubly;

	for (; aux != NULL; aux = aux->next, m++)
		;

	if (m < 2)
	{
		dprintf(2, "L%u: can't div, stack too short\n", cline);
		free_vglo();
		exit(EXIT_FAILURE);
	}

	if ((*doubly)->n == 0)
	{
		dprintf(2, "L%u: division by zero\n", cline);
		free_vglo();
		exit(EXIT_FAILURE);
	}

	aux = (*doubly)->next;
	aux->n /= (*doubly)->n;
	__stack_pop(doubly, cline);
}

/**
 * fl_mul - this will multiply the top element to the second top element of the stack
 *
 * @doubly: holds the head of the linked list
 * @cline: returns the line number;
 * Return: has no return
 */
void fl_mul(stack_t **doubly, unsigned int cline)
{
	int m = 0;
	stack_t *aux = NULL;

	aux = *doubly;

	for (; aux != NULL; aux = aux->next, m++)
		;

	if (m < 2)
	{
		dprintf(2, "L%u: can't mul, stack too short\n", cline);
		free_vglo();
		exit(EXIT_FAILURE);
	}

	aux = (*doubly)->next;
	aux->n *= (*doubly)->n;
	__stack_pop(doubly, cline);
}

/**
 * fl_mod - this computes the rest of the division of the second element
 * by the top element of the stack and more..
 *
 * @doubly: for the head of the linked list
 * @cline: has the line number;
 * Return: has no no return
 */
void fl_mod(stack_t **doubly, unsigned int cline)
{
	int m = 0;
	stack_t *aux = NULL;

	aux = *doubly;

	for (; aux != NULL; aux = aux->next, m++)
		;

	if (m < 2)
	{
		dprintf(2, "L%u: can't mod, stack too short\n", cline);
		free_vglo();
		exit(EXIT_FAILURE);
	}

	if ((*doubly)->n == 0)
	{
		dprintf(2, "L%u: division by zero\n", cline);
		free_vglo();
		exit(EXIT_FAILURE);
	}

	aux = (*doubly)->next;
	aux->n %= (*doubly)->n;
	__stack_pop(doubly, cline);
}
/**
 * fl_pchar - this print the char value of the first element
 *
 * @doubly: reps thehead of the linked list
 * @cline: holds the line number;
 * Return: has no return
 */
void fl_pchar(stack_t **doubly, unsigned int cline)
{
	if (doubly == NULL || *doubly == NULL)
	{
		dprintf(2, "L%u: can't pchar, stack empty\n", cline);
		free_vglo();
		exit(EXIT_FAILURE);
	}
	if ((*doubly)->n < 0 || (*doubly)->n >= 128)
	{
		dprintf(2, "L%u: can't pchar, value out of range\n", cline);
		free_vglo();
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*doubly)->n);
}

/**
 * fl_pstr - this will prints the string of the stack
 *
 * @doubly: the head of the linked list
 * @cline: has the line number;
 * Return: has no return
 */
void fl_pstr(stack_t **doubly, unsigned int cline)
{
	stack_t *aux;
	(void)cline;

	aux = *doubly;

	while (aux && aux->n > 0 && aux->n < 128)
	{
		printf("%c", aux->n);
		aux = aux->next;
	}

	printf("\n");
}
