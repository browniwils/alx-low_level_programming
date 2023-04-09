#include "main.h"

/**
 * append_text_to_file - append text to file
 * @filename: filename
 * @text_content: to be appended
 * Return: 1 other -1 if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_data, i, write_file;

	if (filename == NULL)
	{
		return (-1);
	}

	file_data = open(filename, O_WRONLY | O_APPEND);
	if (file_data == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
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
	}

	close(file_data);
	return (1);
}
