#include "main.h"

/**
 * puts2 - function thatll print every other character of a string
 * @str: pointer as an argument
 *Return: void
 */

void puts2(char *str)
{
	int a, b;
	char c;

	c = *str;
	a = 0;
	while (c)
	{
		a++;
		c = *(str + a);
	}
	b = 0;
	a--;

	while (b <= a)
	{
		_putchar(*(str + b));
		b += 2;
	}
	_putchar('\n');
}
