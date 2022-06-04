#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
/**
 * print_numbers - function with variadic param
 * @n: unsigned int var
 * @separator: character pointer to store char
 * Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);
	while (i < n)
	{
	printf("%d", va_arg(ap, int));
	if (i < (n - 1) && separator != NULL)
	{
	printf("%s", separator);
	}
	i++;
	}
	va_end(ap);
	printf("\n");
}
