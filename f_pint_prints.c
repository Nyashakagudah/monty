#include "monty.h"

/**
 * f_pint - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_pint(stack_t **head, unsigned int counter)
{
	/*Check if the stack is empty*/
	if (*head == NULL)
	{
		/*Print an error message to stderr indicating that the stack is empty*/
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);/*close the file bus.file*/
		free(bus.content);/*free memory alocated to bus.content*/
		free_stack(*head);/*free stack using the free_stack function*/
		exit(EXIT_FAILURE);/*exit the program wth a failure status*/
	}
	/*If the stack is not empty, print the value of the top element*/
	printf("%d\n", (*head)->n);
}
