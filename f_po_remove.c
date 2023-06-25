#include "monty.h"

/**
 * f_pop - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;/*Declare local varible to store crent head of stack*/

	if (*head == NULL)
	{
		/*If stack is empty, print an error message and exit the program*/
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	/*If stack is not empty, remove the top element from the stack*/
	h = *head;/*Store the current head of the stack in local variable*/
	*head = h->next;/*Update head pointer to point next element in stack*/
	free(h);/*Free the memory occupied by the former head of the stack*/
}
