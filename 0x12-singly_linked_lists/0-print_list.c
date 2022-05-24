#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - function to print linked list
 * @h: const param
 * Return: returns numbers of list
*/
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
	if (h->str == NULL)
	{
	printf("[0] (nill)\n");
	h = h->next;
	}
	else
	{
	printf("[%u] %s\n", h->len, h->str);
	h = h->next;
	}
	n++;
	}
	return (n);
}
