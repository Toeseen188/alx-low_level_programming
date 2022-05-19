#include <stdio.h>
#include <stdarg.h>
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

	while (separator == NULL )
	{
	};
	
	va_start(ap, n);
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
	va_end(ap);
	printf("\n");
}
