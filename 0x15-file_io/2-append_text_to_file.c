#include "main.h"

/**
 * _strlen - calculate the length of a string.
 * @s: string.
 * Return: the length of the string.
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of file.
 * @text_content: text.
 * Return: 1 (SUCCESS), 0 (FAILURE).
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int d;
	ssize_t b = 0, l = _strlen(text_content);

	if (!filename)
		return (-1);
	d = open(filename, O_WRONLY | O_APPEND);
	if (d == -1)
		return (-1);
	if (l)
		b = write(d, text_content, l);
	close(d);
	return (b == l ? 1 : -1);
}
