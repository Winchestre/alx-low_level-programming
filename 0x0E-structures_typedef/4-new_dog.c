#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string argument
 * Return: length of input string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * _strcpy - copies string pointed to by src input
 * @dest: pointer to buffer where string is copied into
 * @src: string to be copied
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, length = 0;

	while (src[length] != '\0')
		length++;

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return(dest);
}

/**
 * new_dog - creates a new dog instance
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to the new dog instance (Success), otherwise NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int name_len, owner_len;

	name_len = _strlen(name);
	owner_len = _strlen(owner);
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (name_len + 1));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (owner_len + 1));

	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
