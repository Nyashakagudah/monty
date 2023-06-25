#include "monty.h"

/**
 * f_rotr - rotates the stack to the bottom
 * @head: stack head
 * @counter: line_number
 * Return: no return
 */
void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *copy;/*Declare ptr varable 'copy' of type 'stack_t'*/

	copy = *head;/*Asgn vlu of 'head' ptr to 'copy', crting a copy of head ptr*/

	/*Check if the stack is empty or has only one element*/
	if (*head == NULL || (*head)->next == NULL)
	{
		return;/*If true, return without making any changes*/
	}
	/*Traverse the stack to find the last element*/
	while (copy->next)
	{
		copy = copy->next;
	}
	/*Rotate the stack by moving the top element to the bottom*/
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;/*Set'prev' ptrlast elnt to NLL,as nw hed &has no prv elnt*/
	(*head)->prev = copy;/*Set'prev' ptr of old head  to point to the new head*/
	(*head) = copy;/*Update value of 'head' pointer to the new head*/
}
