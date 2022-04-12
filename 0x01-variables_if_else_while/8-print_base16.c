#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main entry point
 * Return: 0
 */
int main(void)
{
	char d;
	int i;

	for (i = '0'; i <= '9'; i++)
	putchar(i);
	for (d = 'a'; d <= 'f'; d++)
	putchar(d);
	putchar('\n');
	return (0);
}

