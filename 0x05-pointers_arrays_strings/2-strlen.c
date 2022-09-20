#include "main.h"

/**
 * int _strlen - returns the length of a string.
 * @s: the parameter whose string is to be calculated.
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i))
		i++;

	return (i);
}
