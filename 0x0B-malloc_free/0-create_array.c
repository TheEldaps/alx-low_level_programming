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
	int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	char *s;
       	
	s = malloc(sizeof(char) * size);
	for (; i < size; i++)
	{
		*(s + i) = c;
	}

	return (s);
}
