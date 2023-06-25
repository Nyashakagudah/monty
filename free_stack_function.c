#include "monty.h"

/**
 * free_stack - frees a doubly linked list
 * @head: head of the stack
 */
void free_stack(stack_t *head)
{
	stack_t *aux = head; /*Auxiliary pointer to keep track of the next node*/

	while (head)
	{
		aux = head->next; /*Store the next node in aux*/
		free(head); /*Free the current node*/
		head = aux; /*Update head to the next node*/
	}
}
