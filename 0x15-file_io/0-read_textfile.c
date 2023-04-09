#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Reads a file & prints it to POSIX standard output
 * @filename: filename
 * @letters: number of characters to be printed
 * Return: NULL if failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *mem;
	ssize_t open_file, read_file, write_file;

	if (filename == NULL)
	{
		return (0);
	}

	open_file = open(filename, O_RDONLY);
	if (open_file == -1)
	{
		return (0);
	}

	mem = malloc(sizeof(char) * letters);
	if (mem == NULL)
	{
		return (0);
	}

	read_file = read(open_file, mem, letters);
	write_file = write(STDOUT_FILENO, mem, read_file);

	close(open_file);
	free(mem);

	return (write_file);
}
