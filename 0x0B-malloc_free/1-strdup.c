#include <stdlib.h>
#include "main.h"

/**
 *_strdup - function returns a pointer/
*to an allocated space containing a string
 *@str: a pointer to string
 *malloc: a function that allocates space in the heap
 *free - this function frees up space
 *Return: a pointer or NULL
 */

char *_strdup(char *str)
{
	char *s;
	int i;
	int los = 0;
	int a = 1;

	for (; *(str + a) != '\0'; a++)
	{
		los = a
	}
	los + 1
	s = malloc(sizeof(char) * los);
	if (s == NULL)
	{
		return (NULL);
	}

	else
	{
		for (i = 0; i < length_of_str; i++)
		{
			*(s + i) = *(str + i);
		}
		return (s);
	}

}
