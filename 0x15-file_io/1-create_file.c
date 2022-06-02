#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * create_file - function to create a new file with a set permission
 * @filename: param, the name of the file
 * @text_content: param, content of the file
 * Return: return 1
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	int n;
	int n_write;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
	return (-1);

	if (text_content == NULL)
	text_content = "";

	for (n = 0; text_content[n]; n++)
	{
	n_write = write(fd, text_content, n);
	}

	if (n_write == -1)
	return (-1);

	close(fd);
	return (1);
}
