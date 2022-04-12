#include "main.h"
/**
 * print_alphabet_x10 - this function prints 'a' to 'z' 10 times
 * Return: _putchar returns a single character to the sys call
 * Description: this is cool function program
*/

void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;
	while (i < 10)
	{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
	i++;
	}
}
