                    0x19. C - Stacks, Queues - LIFO, FIFO
                            
                            
                            Learning Objectives
At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

                            General
What do LIFO and FIFO mean
What is a stack, and when to use it
What is a queue, and when to use it
What are the common implementations of stacks and queues
What are the most common use cases of stacks and queues
What is the proper way to use global variables
                            
                            Copyright - Plagiarism
You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.
You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
You are not allowed to publish any content of this project.
Any form of plagiarism is strictly forbidden and will result in removal from the program.
                           
            

                            
                            More Info
                            Data structures

                /**
                * struct stack_s - doubly linked list representation of a stack (or queue)
                * @n: integer
                * @prev: points to the previous element of the stack (or queue)
                * @next: points to the next element of the stack (or queue)
                *
                * Description: doubly linked list node structure
                * for stack, queues, LIFO, FIFO
                */
                typedef struct stack_s
                {
                        int n;
                        struct stack_s *prev;
                        struct stack_s *next;
                } stack_t;
                /**
                * struct instruction_s - opcode and its function
                * @opcode: the opcode
                * @f: function to handle the opcode
                *
                * Description: opcode and its function
                * for stack, queues, LIFO, FIFO
                */
                typedef struct instruction_s
                {
                        char *opcode;
                        void (*f)(stack_t **stack, unsigned int line_number);
                } instruction_t;
                            
                           
                            Compilation & Output
Your code will be compiled this way:
                $ gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty
