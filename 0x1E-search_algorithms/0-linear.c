#include "search_algos.h"
/**
 * linear_search - function to search for a value in an aray
 * @array: Pointer to the first element
 * @size: the size of an array
 * @value: the valuesearched fd
 * Return: returns the value searched for and -1 if empty or not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
	printf("Value checked array[%lu] = [%i]\n", i, array[i]);

	if (array[i] == value)
		return (i);
	}
	return (-1);
}
