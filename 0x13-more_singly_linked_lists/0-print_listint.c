#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function to print all listint_t lists
 * @h: node param
 * Return: returns size_t e
*/

size_t print_listint(const listint_t *h)

{
	size_t e;

	for (e = 0; h; e++)
	{
	printf("%d\n", h->n);
	h = h->next;
	}
	return (e);
}
