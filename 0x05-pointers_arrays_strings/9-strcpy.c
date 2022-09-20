#include "main.h"

/**
 * _strcpy - function that copies a string at the address of its argument
 * @dest: argument
 * @src: argument
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i))
	{
		i++;
	}
	*(dest + i) = '\0';
	i--;
	while (i >= 0)
	{
		*(dest + i) = *(src + i);
		i--;
	}
	return (dest);
}
