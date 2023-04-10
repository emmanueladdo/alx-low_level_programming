#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @file_name: Name of file.
 * @text_content: Text to add to the end of the file.
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *file_name, char *text_content)
{
	int file_descriptor, bytes_written, text_length;

	if (file_name == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	file_descriptor = open(file_name, O_APPEND | O_WRONLY);
	if (file_descriptor == -1)
		return (-1);
	for (text_length = 0; text_content[text_length] != '\0'; text_length++)
		;
	bytes_written = write(file_descriptor, text_content, text_length);

	if (bytes_written == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}
