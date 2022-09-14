#include "main.h"
/**
 * times_table - displays the times table fron 0 to 9
 * Return: the exit location for the program
 */


void times_table(void)
{
	int a = 0;
	int b = 0;
	int c = (a * b);

	for(a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			_putchar(c + '0');
			_putchar(',');
			_putchar(' ');
		}
	_putchar('\n');
	}
}
