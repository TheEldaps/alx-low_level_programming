#include "main.h"
/**
 * print_rev - prints string in reverse
 * @s: parameter or argument
 * Return: 0
 *
 */

void print_rev(char *s)
{
	int i, g;
	char c;

	i = 0;
	while (*(s + i))
	{
		i++;
	}
	c = *(s + i - 1);
	g = 1;
	while (c)
	{
		_putchar(c);
		g++;
		c = *(s + i - g);
	}
	_putchar('\n');
}
