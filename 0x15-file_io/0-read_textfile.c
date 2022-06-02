#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - function to read, write and return no of printed text
 * @filename: filename to be given as param
 * @letters: number of letters in a file
 * Return: returns nmber of printed text
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t nread, nwrite;
	char *buf;

	if (filename == NULL)
	return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	return (0);

	buf = malloc(sizeof(char) * (letters));
	if (buf == NULL)
	return (0);

	nread = read(fd, buf, letters);

	nwrite = write(STDOUT_FILENO, buf, nread);

	close(fd);
	free(buf);
	return (nwrite);


}
