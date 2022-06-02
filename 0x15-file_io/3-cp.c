#include <unistd.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * error_file - checks if files can be opened
 * @file_from: file_from
 * @file_to: file_to
 * @argv: arguments vector
 * Return: none
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
	dprintf(STDERR_FILENO, "Error: Cant read from file %s\n", argv[1]);
	exit(98);
	}
	if (file_to == -1)
	{
	dprintf(STDERR_FILENO, "Error: Cant write to %s\n", argv[2]);
	exit(99);
	}
}

/**
 * main - check the code
 * @argc: number of arguments or argument count.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t n_chars, n_write;
	char buffer[1024];

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
	exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	n_chars = 1024;
	while (n_chars == 1024)
	{
	n_chars = read(file_from, buffer, 1024);
	if (n_chars == -1)
	error_file(-1, 0, argv);
	n_write = write(file_to, buffer, n_chars);
	if (n_write == -1)
	error_file(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
	dprintf(STDERR_FILENO, "Error: Cant close fd %d\n", file_from);
	exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
	dprintf(STDERR_FILENO, "Error: Cant close fd %d\n", file_from);
	exit(100);
	}
	return (0);
	}
