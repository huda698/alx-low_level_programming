#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output.
 * @filename: name of file.
 * @letters: number of bytes.
 * Return: the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int d;
	ssize_t b;
	char bf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	d = open(filename, O_RDONLY);
	if (d == -1)
		return (0);
	b = read(d, &bf[0], letters);
	b = write(STDOUT_FILENO, &bf[0], b);
	close(d);
	return (b);
}
