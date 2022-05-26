#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function to print all listint_t lists
 * @h: node param
 * Return: returns size_t e
*/

size_t print_listint(const listint_t *h)

{
	size_t e = 0;

	while (h != NULL)
	{
	if (!h->n)
	{
	printf("[0] (nil)");
	h = h->next;
	}
	else
	{
	printf("%d\n", h->n);
	h = h->next;
	}
	e++;
	}
	return (e);
}
