#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: parameter to the function
 *
 * Return: 1 if success
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}

}
