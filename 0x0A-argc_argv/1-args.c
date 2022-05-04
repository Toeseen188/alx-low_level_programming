#include <stdio.h>
/**
 * main - main function
 * @argc: argument counts
 * @argv: arguments vector
 * Return: 0
*/

int main(int argc, char *argv[])

{
	int i = argc;

	argv[i] = argv[i];
	printf("%d\n", i);

	return (0);
}
