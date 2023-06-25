#include "monty.h"

/**
  * f_sub - Subtraction
  * @head: Pointer to the stack head
  * @counter: Line number
  * Return: No return value
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *aux;
	int sus, nodes;

	aux = *head;
	/* Count the number of nodes in the stack */
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	/* Check if there are enough elements in the stack */
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	/* Perform subtraction operation */
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	/* Move the head to the next element and free the previous top element */
	*head = aux->next;
	free(aux);
}
