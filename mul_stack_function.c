#include "monty.h"

/**
 * f_mul - multiplies the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_mul(stack_t **head, unsigned int counter)
{
	stack_t *h;/*Declare a temporary pointer variable*/
	int len = 0, aux;/* Dclare variabls for len and auxiliary vlue*/

	h = *head;/*Set the temporary pointer to the head of the stack*/

	/*Calculate the length of the stack*/
	while (h)
	{
		h = h->next;/*Traverse the stack*/
		len++;/*Increment length*/
	}
	/*Check if there are enough elements in the stack*/
	if (len < 2)
	{
		/*Print an error message with line number and reason*/
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file); /*Close a file (bus.file)*/
		free(bus.content); /*Free allocated memory (bus.content)*/
		free_stack(*head); /*Free the entire stack*/
		exit(EXIT_FAILURE); /*Exit the program with failure status*/
	}
	h = *head;/*Reset the temporary pointer to the head of the stack*/
	aux = h->next->n * h->n; /*Calculate the product of the top two elements*/
	h->next->n = aux; /*Update the second element with the product*/
	*head = h->next; /*Update the head to the second element*/
	free(h); /*Free the memory of the current head node*/
}
