#include "main.h"

/**
 * create_file - creates a file.
 * @filename: the name of file.
 * @text_content: text.
 * Return: 1 (SUCCESS), 0 (FAILURE).
 */

int create_file(const char *filename, char *text_content)
{
	int d;
	ssize_t b = 0, l = _strlen(text_content);

	if (!filename)
		return (-1);
	d = open(filename, O_WRONLY, O_CREAT, O_TRUNC, S_IRUSR, S_IWUSR);
	if (d == -1)
		return (-1);
	if (l)
		b = write(d, text_content, l);
	close(d);
	return (b == l ? 1 : -1);
}
