#include "lists.h"
/**
 * print_dlistint - print number of elements in a doubly linked list
 * @h: a param of type dlistint
 * Return: returns 0 if successful
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (h == NULL)
		return (i);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
return (0);
}
