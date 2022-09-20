#include "main.h"
/**
 * rev_string - the function that reverses a string
 * @s: the argument
 * Return:
 *@s: parameter
 * rev - reverse function
 * @a: parameter
 * @b: another parameter
 */

void rev(char *a, char *b)
{
	char tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void rev_string(char *s)
{
int i, j;

	i = 0;
	while (*(s + i))
	{
		i++;
	}
	i--;
	j = 0;
	while (i > j)
	{
		rev(s + i, s + j);
		j++;
		i--;
	}
}
