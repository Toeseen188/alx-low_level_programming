#include "lists.h"
/**
 * dlistint_len - print the number of element in a doubly list
 * @h: parameter pointer
 * Return: exit 0 if success
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
return (0);
}

