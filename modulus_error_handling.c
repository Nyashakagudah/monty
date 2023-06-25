#include "monty.h"

/**
 * f_mod - computes the rest of the division of the second
 *         top element of the stack by the top element of the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_mod(stack_t **head, unsigned int counter)
{
	stack_t *h;/*Pointer to a stack node*/
	int len = 0, aux;

	h = *head;/*Assign the value of the head to 'h'*/
	/*Count the number of nodes in the stack*/
	while (h)
	{
		h = h->next;
		len++;
	}
	/*Check if the stack has at least 2 elements*/
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;/*Reset 'h' to the head of the stack*/
	/*Check if dividing by zero*/
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	/*Compute the modulus of the second top element by the top element*/
	aux = h->next->n % h->n;
	h->next->n = aux;
	*head = h->next;/*Move 'head' to the next node*/
	free(h);/*Free memory for the previous top element*/
}
