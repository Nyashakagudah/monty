#include "monty.h"

/**
 * f_add - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *h; /*Declare a pointer to a stack node*/
	int len = 0, aux; /*Initialize a counter and an auxiliary variable*/

	h = *head; /*Set the pointer to the stack head*/

	/*Count the number of elements in the stack*/
	while (h)
	{
		h = h->next; /*Move to the next node*/
		len++; /*Increment the counter*/
	}

	/*If the stack has less than 2 elements, handle the error*/
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);/*Close file(asumed to be part of data strctre caled bus)*/
		free(bus.content); /*Free mmry(asumd to be part of data strctre caled bus)*/
		free_stack(*head); /*Free the stack memory*/
		exit(EXIT_FAILURE); /*Exit the program with a failure status*/
	}
	h = *head; /*Reset the pointer to the stack head*/
	aux = h->n + h->next->n; /*Perform the addition and store the result in aux*/
	h->next->n = aux; /*Update the value of the second element with the sum*/
	*head = h->next; /*Update the stack head to the second element*/

	free(h); /*Free the memory occupied by the first element*/
}
