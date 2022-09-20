#include "main.h"

/**
 * puts_half - prints the other half of a string
 * @str: argument which is a pointer
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, j;
	char c;

	c = *str;
	i = 0;
	while (c)
	{
		i++;
		c = *(str + i);
	}
	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i + 1) / 2;
	while (j < i)
	{
		_putchar(*(str + j));
		j++;
	}
	_putchar('\n');
}