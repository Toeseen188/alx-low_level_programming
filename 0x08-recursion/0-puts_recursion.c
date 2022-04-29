#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: argument
 * Return: returns 0 on success
*/
void _puts_recursion(char *s)
{
	if  (*s == 0)
	{
	_putchar('\n');
	return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
	}

}
