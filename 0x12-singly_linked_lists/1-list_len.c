#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - a function to return number of list
 * @h: parameter to take
 * Return: returns len
*/


size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
	if (h->next != NULL)
	h = h->next;

	else
	h = h->next;

	len++;
	}
	return (len);
}
