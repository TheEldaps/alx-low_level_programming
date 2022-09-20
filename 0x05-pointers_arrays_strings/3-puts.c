#include "main.h"

/**
 * _puts - the function that prints a string to stdoutput
 * @str: pointer to the variable whose stribg we want to print
 * Return: always zero
 *
 */

void _puts(char *str)
{
	int a;
	char i;

	i = *str;
	a = 0;
	while (i)
	{
		_putchar(i);
		a++;
		i = *(str + a);
	}
	_putchar('\n');
}
