#include <stdio.h>
/**
 * main - main function
 * @argc: argument counts
 * @argv: arguments vector
 * Return: 0
*/

int main(int argc, char *argv[])

{	int i;
	i = argc - 1;

	printf("%d\n", i);
	argv[i] = argv[i];

	return (0);
}
