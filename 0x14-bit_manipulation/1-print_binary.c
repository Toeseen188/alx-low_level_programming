#include "main.h"
/**
 * print_binary - function to convert base 10 t0 binary
 * @n: integer param
 * Return: none
*/
void print_binary(unsigned long int n)
{
	if (n > 1)
	print_binary(n >> 1);

	_putchar((n & 1) + '0');

}
