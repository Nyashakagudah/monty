#include "monty.h"

/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: unused parameter
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter; /*Unused parameter*/

	h = *head;/*Assign vale of stack's head ptr to local varble 'h'*/
	if (h == NULL)
		return; /*If the stack is empty, return immediately*/
	while (h)
	{
		printf("%d\n", h->n); /*Print the value of the current node*/
		h = h->next; /*Move to the next node in the stack*/
	}
}
