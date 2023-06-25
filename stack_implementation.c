#include "monty.h"

/**
 * f_queue - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;/* Unused parameter*/
	(void)counter;/*Unused parameter*/
	bus.lifi = 1;/*Set the global variable bus.lifi to 1*/
}
/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * Return: no return
*/
void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;/*Asign value of head to auxiliary varable aux*/

	new_node = malloc(sizeof(stack_t));/*Alocte mmry for new node*/
	if (new_node == NULL)
	{
		printf("Error\n");/*Print error mssag if mmry aloctin fals*/
	}
	new_node->n = n;/*Assign value of n to n mmber of new node*/
	new_node->next = NULL;/*Set next membr of new node to NULL wil added at tail*/
	if (aux)
	{
		while (aux->next)/*Traverse stack until last node is reached*/
		{
			aux = aux->next;
		}
	}
	if (!aux)/*If the stack is empty*/
	{
		*head = new_node;/*Update head to point to new node*/
		new_node->prev = NULL;/*Set prev mmber of new node to NULL as it first node*/
	}
		else /*If the stack is not empty*/
		{
			aux->next = new_node;/*Update next mmbr of last node point to new node*/
			new_node->prev = aux;/*Set prev embr of new node to last node*/
		}
}
