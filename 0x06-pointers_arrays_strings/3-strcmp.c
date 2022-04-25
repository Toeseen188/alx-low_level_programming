#include "main.h"
/**
 * _strcmp - string compare
 * @s1: arg
 *@s2: arg
 *Return: return cmp
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int cmp;

	while (s1[i] != '\0' && s2[i] != '\0' && cmp == 0)
	{
	if (s1[i] > s2[i])
	cmp = -1;

	else if (s1[i] < s2[i])
	cmp = 1;

	else
	cmp = 0;
	i++;
	}

	return (cmp);
}
