#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: content written into file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int open_file, l_count, rwr;

	if (!filename)
		return (-1);

	open_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (open_file == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	l_count = 0;
	while (text_content[l_count])
	{
		l_count++;
	}
	rwr = write(open_file, text_content, l_count);
	if (rwr == -1)
		return (-1);

	close(open_file);

	return (1);

}
