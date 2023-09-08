#include "main.h"
#include <stdio.h>

/**
 * checkErr - checks if file can be opened
 * @src: file from
 * @dest: file to
 * @argv: argument vector
 * Return: no return
 */
void checkErr(int src, int dest, char *argv[])
{
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Copies content from one file to another
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, closeErr;
	ssize_t charNum, wr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	checkErr(file_from, file_to, argv);

	charNum = 1024;
	while (charNum == 1024)
	{
		charNum = read(file_from, buffer, 1024);
		if (charNum == -1)
			checkErr(-1, 0, argv);
		wr = write(file_to, buffer, charNum);
		if (wr == -1)
			checkErr(0, -1, argv);
	}
	closeErr = close(file_from);
	if (closeErr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	closeErr = close(file_to);
	if (closeErr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
