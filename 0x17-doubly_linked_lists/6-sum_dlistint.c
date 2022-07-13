#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - a fuction to sum up all head->n
 * @head: head node
 * Return: returns sum if successful
 */

int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	if (head == NULL)
		return (EXIT_SUCCESS);
	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
