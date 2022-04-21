#include "main.h"
/**
 * _strlen - function to count string
 * Return: return i
 * @s : char var
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	i++;
	return (i);
}
