#ifndef MONTY
#define MONTY

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ctype.h>

/**
 * struct stack_s - this is the doubly linked list representation of a stack (or queue)
 * @n: reps the integer
 * @prev: this will point to the previous element of the stack (or queue)
 * @next: this will point to the next element of the stack (or queue)
 *
 * Description: for the doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct globals - the global structure to use in the functions
 * @lifo: this is stack or queue
 * @cont: to give us the current line
 * @arg: the second parameter inside the current line
 * @head: for the doubly linked list
 * @fd: this is the file descriptor
 * @buffer: to be able to input text
 *
 * Description: for the doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project alx
 */
typedef struct globals
{
	int lifo;
	unsigned int cont;
	char  *arg;
	stack_t *head;
	FILE *fd;
	char *buffer;
} global_t;

/**
 * struct instruction_s - opcode and its function and more
 * @opcode: the opcode for opcode
 * @f: function to handle the opcode definitely
 *
 * Description: desc for opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project at alx
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern global_t vglo;

/* opcode_instructuions*/
void __stack_push(stack_t **stack, unsigned int line_number);
void __stack_pall(stack_t **stack, unsigned int line_number);
void __stack_pint(stack_t **doubly, unsigned int cline);
void __stack_pop(stack_t **doubly, unsigned int cline);
void __node_swap(stack_t **doubly, unsigned int cline);
void f__queue(stack_t **doubly, unsigned int cline);
void _stack(stack_t **doubly, unsigned int cline);
void fl_add(stack_t **doubly, unsigned int cline);
void fl_nop(stack_t **doubly, unsigned int cline);
void fl_sub(stack_t **doubly, unsigned int cline);
void fl_div(stack_t **doubly, unsigned int cline);
void fl_mul(stack_t **doubly, unsigned int cline);
void fl_mod(stack_t **doubly, unsigned int cline);
void fl_pchar(stack_t **doubly, unsigned int cline);
void fl_pstr(stack_t **doubly, unsigned int cline);
void fl_rotl(stack_t **doubly, unsigned int cline);
void fl_rotr(stack_t **doubly, unsigned int cline);

/*this is the get function*/
void (*get_opcodes(char *opc))(stack_t **stack, unsigned int line_number);

/*these are the imported functions*/
int _sch(char *s, char c);
char *_strtoky(char *s, char *d);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void *_calloc(unsigned int nmemb, unsigned int size);
int _strcmp(char *s1, char *s2);

/* this are the doubly linked list functions */
stack_t *add_dnodeint_end(stack_t **head, const int n);
stack_t *add_dnodeint(stack_t **head, const int n);
void free_dlistint(stack_t *head);

/* and here's the main */
void free_vglo(void);

#endif
