#include "monty.h"

/**
 * f_pall - prints stack
 * @head: stack-head
 * @counter: not in use
 * Return: no
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
