#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file
 * @text_content: new file content
 *Return: 1 if file exists. -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int open_file, l_count, rwr;

	if (!filename)
		return (-1);

	open_file = open(filename, O_WRONLY | O_APPEND);

	if (open_file == -1)
		return (-1);

	if (text_content)
	{
		for (l_count = 0; text_content[l_count]; l_count++)
			;
		rwr = write(open_file, text_content, l_count);
		if (rwr == -1)
			return (-1);
	}

	close(open_file);

	return (1);
}
