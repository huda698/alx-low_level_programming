#include "main.h"
#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error: Can't read from file NAME_OF_THE_FILE%s\n"
#define ERR_NOWRITE "Error: Can't write to NAME_OF_THE_FILE%s\n"
#define ERR_NOCLOSE "Error: Can't close fd FD_VALUE%d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - Entry point.
 * @ac: integer.
 * @av: char.
 * Return: 1 (SUCCESS), 0 (FAILURE).
 */

int main(int ac, char **av)
{
	int from_d = 0, to_d = 0;
	ssize_t b;
	char bf[READ_BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	from_d = open(av[1], O_RDONLY);
	if (from_d == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	to_d = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_d == -1)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	while ((b = read(from_d, bf, READ_BUF_SIZE)) > 0)
		if (write(to_d, bf, b) != b)
			dprintf(STDERR_FILENO, ERR_NOWRITE, av[2]), exit(99);
	if (b == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1]), exit(98);
	from_d = close(from_d);
	to_d = close(to_d);
	if (from_d)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_d), exit(100);
	if (to_d)
		dprintf(STDERR_FILENO, ERR_NOCLOSE, from_d), exit(100);
	return (EXIT_SUCCESS);
}
