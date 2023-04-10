#include "main.h"

/**
 * create_file - creates a file and writes to it
 * @filename: the name of the file to create
 * @text_content: the text to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_d, bytes_written, i;

	if (filename == NULL)
		return (-1);
	file_d = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_d == -1)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		bytes_written = write(file_d, text_content, i);
		if (bytes_written == -1)
			return (-1);
	}
				close(file_d);
				return (1);
}
