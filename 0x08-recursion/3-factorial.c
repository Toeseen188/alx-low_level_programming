#include "main.h"
/**
 * factorial - get the factorial of n
 * @n: param
 * Return: 1 if successful
*/
int factorial(int n)
{
	if (n < 0)
	return (-1);
	if (n == 0)
	return (1);
	return (n  + factorial(n - 1));
}
