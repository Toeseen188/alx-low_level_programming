#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - function to create an array and allocate a memory
 *@size: size of the array
 *@c: character parameter intialized to arrray
 *Return: NULL if (size == 0 || ar == NULL), returns ar if otherwise
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	ar = malloc(size * sizeof(char));
	if (size == 0 || ar == NULL)
	return (NULL);
	else
	{
	for (i = 0; i < size; i++)
	ar[i] = c;
	return (ar);
	}
}


