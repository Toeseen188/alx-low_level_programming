#include <stdio.h>
#include <stdlib.h>
/**
 *  *  * main -  program that prints all possible combinations of single-digit
 *   * Return: 0
 *    **/

int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
	putchar(n);
	if (n > 56)
	continue;
	putchar(44);
	putchar(32);
	}
	putchar('\n');
	return (0);
}
