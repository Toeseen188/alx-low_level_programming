#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
 * print_strings - prints strings
 * @separator: character who separate number
 * @n: element's string
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
	str = va_arg(ap, char *);
	if (str == NULL)
	printf("%s", "(nil)");
	else
	printf("%s", str);

	if (i < n - 1 && separator != NULL)
	{
	printf("%s", separator);
											}
	}
	va_end(ap);
	printf("\n");
}
