#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generate a key depending on a username for crackme5
 * @argc: number of arguments passed
 * @argv: main arguments
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int i, j;
	size_t length, sum;
	char *code = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
	char p[7] = "      ";
	
	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	length = strlen(argv[1]);
	p[0] = code[(length ^ 59) & 63];
	for (i = 0, sum = 0; i < length; i++)
		sum += argv[1][i];
	p[1] = code[(sum ^ 79) & 63];
	for (i = 0, j = 1; i < length; i++)
		j *= argv[1][i];
	p[2] = code[(j ^ 85) & 63];
	for (j = argv[1][0], i = 0; i < length; i++)
		if ((char)j <= argv[1][i]) 
                         j = argv[1][i];
	srand(j ^ 14);
	p[3] = code[rand() & 63];
	for (j = 0, i = 0; i < length; i++)
		j += argv[1][i] * argv[1][i];
	p[4] = code[(j ^ 239) & 63];
	for (j = 0, i = 0; (char)i < argv[1][0]; i++)
		j = rand();
	p[5] = code[(j ^ 229) & 63];
	printf("%s\n", p);
	return (0);
}
