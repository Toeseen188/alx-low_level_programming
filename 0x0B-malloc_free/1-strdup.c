#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - allocate and duplicate string
 *@c: param
 * Return: returns NULL if str || s == Null, otherwise return s
 */
/* function prototype*/
int _strlen(char *c);

char *_strdup(char *str)
{
	char *s;
	int i;

	int a = _strlen(str) + 1;

	s = malloc(a * sizeof(char));
	if (str == NULL || s == NULL)
	return ('\0');
	else
	for (i = 0; i < a; i++)
	s[i] = str[i];
	return (s);
	free(s);


}

/**
 * _strlen - length of a string
 * @c: param
 * Return: i
 */

int _strlen(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	i++;
	return (i);
}
