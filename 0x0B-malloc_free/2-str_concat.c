#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *str_concat - concatenates two strings
 *@s1: a string
 *@s2: a string
 *Return: Null or a pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i = 0, b = 0, ls1 = 0, ls2 = 0, int los = 0, int c = 0;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	else if (s1 == NULL && s2 != NULL)
		printf("%s\n", s2);
		return (NULL);
	else if (s1 != NULL && s2 == NULL)
		printf("%s\n", s1)
		return (NULL);

	for (; *(s1 + i) != '\0'; i++)
		ls1 = i + 2;
	for (; *(s2 + b) != '\0'; b++)
		ls2 = b + 2;
	los = ls1 + ls2 - 1;
	s = malloc(sizeof(char) * los);
	if (s == NULL)
		return (NULL);
	for (i = 0; *(s1 + i) != '\0'; i++)
		*(s + i) = *(s1 + i);
	for (; *(s2 + c) != '\0'; c++, i++)
		*(s + i) = *(s2 + c);
	*(s + i) = '\0';
	return (s);
}
