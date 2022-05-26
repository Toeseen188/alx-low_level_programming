#include <stdio.h>
#include "lists.h"
/**
 * listint_len - func to return the number of elements in a linked list
 * @h: param
 * Return: returns len
*/
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
	if (h->next == NULL)
	h = h->next;

	else
	h = h->next;

	len++;
	}
	return (len);
}
