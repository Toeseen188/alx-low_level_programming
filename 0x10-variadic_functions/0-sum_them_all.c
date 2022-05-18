#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function containing a variadic parameter
 * @n: param
 * Return: return sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	unsigned int sum = 0;

	va_start(ap, n);
	if (n == 0)
	return (0);
	for (i = 0; i < n; i++)
	sum += va_arg(ap, unsigned int);
	va_end(ap);
	return (sum);
}
