#include "monty.h"

/**
 * f_pstr - prints the string starting at the top of the stack,
 *          followed by a new line
 * @head: stack head
 * @counter: line_number (unused)
 * Return: no return
 */
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;/*Suppress unused parameter warning*/

	h = *head;/*Assign value of stack's head to local variable 'h'*/
	while (h)
	{
		/*Check the vlue stored in curnt node is outside the prntble ASCII rnge*/
		if (h->n > 127 || h->n <= 0)
		{
			break;/*Exit loop if non-prntble chractr or vlue <= 0 is encontrd*/
		}
		printf("%c", h->n);/*Print charctr reprsntd by 'h->n'*/
		h = h->next;/*Move to the next node in the stack*/
	}
	printf("\n");/*Print a newline character at the end of the string*/
}
