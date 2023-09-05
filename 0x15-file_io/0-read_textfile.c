#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int open_file;
	ssize_t rd, wr;
	char *buffr;

	if (!filename)
		return (0);

	open_file = open(filename, O_RDONLY);
	if (open_file == -1)
		return (0);

	buffr = malloc(sizeof(char) * (letters));
	if (!buffr)
		return (0);

	rd = read(open_file, buffr, letters);
	wr = write(STDOUT_FILENO, buffr, rd);

	close(open_file);

	free(buffr);

	return (wr);

}
