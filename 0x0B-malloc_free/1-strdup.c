#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - allocate and duplicate string
 * @str: character parameter
 * Return: returns NULL if str || s == Null, otherwise return s
 */



char *_strdup(char *str)
{
	char *s;
	int i;
	int a = _strlen(str) + 1;

	s = malloc(a * sizeof(char));
	if (str == NULL || s == NULL)
	return (NULL);
	else
	for (i = 0; i < a; i++)
	s[i] = str[i];
	return (s);
	free(s);


}
