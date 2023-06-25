#include "monty.h"

/**
 * f_nop - Does nothing.
 * @head: Pointer to the head of the stack.
 * @counter: Line number.
 * Return: No return value.
 */
void f_nop(stack_t **head, unsigned int counter)
{
	/*The function does nothing, so no operations are performed*/
	/*The(void)keywrd is used to indcte the varibles are not used*/
	/*This prevents compiler warnings about unused variables*/
	(void)counter;
	(void)head;
}
