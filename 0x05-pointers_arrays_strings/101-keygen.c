#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords
 *
 * Return: Always 0
 */
int main(void)
{
	char str[100];
	int i = 0, randNum = 0, sum = 0;

	srand(time(NULL));
	for (i = 0; sum <= 2644; i++)
	{
		randNum = (rand() % 25) + 65;
		str[i] = randNum;
		sum += randNum;
	}
	str[i++] = 2772 - sum;
	str[i++] = '\0';
	printf("%s\n", str);

	return (0);
}
