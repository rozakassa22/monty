#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: stack head
 * Return: nothing
*/
void f_pall(stack_t **head)
{
	stack_t *h;

	h = *head;
	if (h == NULL)
		return;
	for (; h; h = h->next)
{
              printf("%d\n", h->n);
}   
}
