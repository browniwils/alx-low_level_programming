#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename to be use to create the file
 * @text_content: content of the file
 * Return: 1 otherwise 0 if it fails
 */

int create_file(const char *filename, char *text_content)
{
	int file_data, i, write_file;

	if (text_content == NULL)
	{
		text_content = "";
	}

	if (filename == NULL)
	{
		return (-1);
	}

	file_data = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_data == -1)
	{
		return (-1);
	}

	i = 0;
	while (text_content[i] != 0)
	{
		i++;
	}

	write_file = write(file_data, text_content, i);
	if (write_file == -1)
	{
		return (-1);
	}
	close(file_data);
	return (1);
}
