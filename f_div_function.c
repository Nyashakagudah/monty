#include "monty.h"

/**
 * f_div - divides the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_div(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	/*Calculate the length of the stack*/
	while (h)
	{
		h = h->next;
		len++;
	}
	/*Check if there are at least 2 elements in the stack*/
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	/* Check for division by zero*/
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	/*Perform the division*/
	aux = h->next->n / h->n;
	h->next->n = aux;
	*head = h->next;/*update the stck to remove the top element*/
	free(h);
}
