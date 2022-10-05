#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array
 * @size: an integer vatiable stating the size of the array
 * @c: the character thatll form the array
 *
 * Return: Null or a pointer
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}
       	
	s = malloc(sizeof(char) * size);
	for (; i < size; i++)
	{
		*(s + i) = c;
	}

	return (s);
}
