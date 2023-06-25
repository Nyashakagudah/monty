#include "monty.h"

/**
 * f_push - add node to the stack or queue
 * @head: pointer to the head of the stack
 * @counter: line number
 *
 * Description: This fncton adds new node to stack or queue based on
 *              value of the `bus.lifi` variable.
 */
void f_push(stack_t **head, unsigned int counter)
{
	int n, j = 0, flag = 0;

	if (bus.arg)/*check if bus.arg is not NULL*/
	{
		if (bus.arg[0] == '-')/*check if bus.arg starts wth a minus sign*/
			j++;
		for (; bus.arg[j] != '\0'; j++)/*itrate ovr chractr of bus.arg*/
		{
			/*Check if the character is not a digit*/
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				flag = 1;
		}
		/*If flag is set to 1, the string contains non-digit characters*/
		if (flag == 1)
		{
			/*Print an error message and exit with failure status*/
			fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		/*Print an error message and exit with failure status*/
		fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	n = atoi(bus.arg);/*convert bus.arg to an integr*/
	/*add the integer to the stack or queue based on bus.lifi*/
	if (bus.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}
