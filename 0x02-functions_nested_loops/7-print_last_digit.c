#include "main.h"
/**
 * print_last_digit - prints the last digit of a given integer
 * Return: always 0
 * @c: the parameter holding the value of the integer to be computed
 */

int print_last_digit(int c)
{

	c = c % 10;
	if (c < 0)
	{
		c = c / -1;
		_putchar('0' + c);
		return (c);
	}
	else
	_putchar('0' + c);
	return (c);
}
