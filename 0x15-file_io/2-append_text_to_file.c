#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
/**
 * append_text_to_file - func to append text to files
 * @filename: param, filename
 * @text_content: contents to apppend
 * Return: return 1 if successs, and -1 if fails
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int n;
	int n_write;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	return (-1);

	if (text_content == NULL)
	return (1);

	for (n = 0; text_content[n]; n++)
	;
	n_write = write(fd, text_content, n);

	if (n_write == -1)
	return (-1);

	close(fd);
	return (1);

}
