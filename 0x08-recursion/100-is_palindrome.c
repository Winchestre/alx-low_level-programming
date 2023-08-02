#include "main.h"

/**
 * _strlen_recursion - returns length of string
 * @s: string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * checkAndCompare - checks and compares each char of string input
 * @s: string
 * @n1: smallest iterator
 * @n2: biggest iterator
 * Return: Always 0
 */
int checkAndCompare(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + checkAndCompare(s, n1 + 1, n2 - 1));
	}
	return (0);
}

/**
 * is_palindrome - checks if string is a palindrome
 * @s: string
 * Return: 1 if s is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (checkAndCompare(s, 0, _strlen_recursion(s) - 1));
}
