#include <stdlib.h>
#include "lists.h"
/**
 * free_list - function to free all usable head struct
 * @head: param
 * Return: void
*/
void free_list(list_t *head)
{
	if (head)
	{
	free_list(head->next);
	free(head->str);
	free(head);
	}
}
