#include <stdlib.h>
#include "main.h"
#include <stdio.h>
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
	int a = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (; *(str + a) != '\0'; a++)
		{
			los = a + 2;
		}
	}

	s = malloc(sizeof(char) * los);
	if (s == NULL)
	{
		return (NULL);
	}

	else
	{
		for (i = 0; i < los; i++)
		{
			*(s + i) = *(str + i);
		}
		return (s);
	}

}
