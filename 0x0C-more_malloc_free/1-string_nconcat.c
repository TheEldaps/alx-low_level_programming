#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: a string
 * @s2: a string
 * @n: ans integer value
 * Return: the pointer or error
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int a = 0, b = 0;
	int i, j;

	a = strlen(s1);
	b = strlen(s2);
	if (n >= s2)
	{
		p = malloc(sizeof(char) * (a + b) + 1)
	}
	else
		p = malloc(sizeof(char) * (a + n + 1));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; *(s1 + i) != '\0', i++)
	{
		*(p + i) = *(s1 + i);
	}

	for (j = 0; *(s2 + j) != '\0', j++)
	{
		*(p + i) = *(s2 + j);
		++i;
	}
	*(p + i) = '\0';
	return (p);

}
