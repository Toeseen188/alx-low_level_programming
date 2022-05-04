#include <stdio.h>
/**
 * main - main function
 * @argc: argument counts
 * @argv: argument vector
 * Return: success returns 0
 */


int main(int argc, char *argv[])
{
	int i;

	i = argc;
	for (i = 0; (argv[i] = argv[i]); i++)
	printf("%s\n", argv[i]);

	return (0);
}
