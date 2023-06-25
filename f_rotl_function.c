#include "monty.h"

/**
  * f_rotl - rotates the stack to the top
  * @head: stack head
  * @counter: line_number
  * Return: no return
 */
void f_rotl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *head, *aux;
	/*If stack is empty or has only one elemnt,there is nothng to rotate*/
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	/*Store the second element of the stack in 'aux'*/
	aux = (*head)->next;
	aux->prev = NULL;
	/*Traverse the stack to find the last element*/
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	/*Make the last element point to the original head of the stack*/
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	/*Update the head of the stack to be the second element*/
	(*head) = aux;
}
