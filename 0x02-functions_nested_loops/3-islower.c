#include <stdio.h>
/**
 * main - Entry point
 *
 * Description - check for lower case character
 *
 * Return: 0
 *
 */
int charFunc();
int _islower(int ch);
int main(void)
{
	int testCase;

	/*testCase = _islower('H');
	putchar(testCase + '0');
	testCase = _islower('o');
	putchar(testCase + '0');*/
	testCase = _islower(92);
	printf("%c\n", testCase);
	/*putchar(testCase + '0');*/
	charFunc();
	putchar('\n');

	return (0);
}
/**
 * main - Entry point
 * @ch: character argument
 * Description - checks if character is lower or upper case
 */
int _islower(int ch)
{
	if (ch >= 97 && ch <= 123)
	{
		return (1);
	} else if (ch >= 65 && ch <= 91)
	{
		return (0);
	}
}
int charFunc()
{
	int chaNum, i;

	for (i = 17, chaNum = 17; chaNum <=123; chaNum++)
	{
		putchar(chaNum + '0');
	}
}
