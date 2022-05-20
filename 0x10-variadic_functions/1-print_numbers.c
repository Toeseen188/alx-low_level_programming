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
	if (*separator != '\0')
	{
	while (i < n)
	{
	printf("%d", va_arg(ap, int));
	while (i < (n - 1))
	{
	printf("%s", separator);
	break;
	}
	i++;
	}
	}
	else
	{
	exit(0);
	}
	printf("\n");
	va_end(ap);
}
