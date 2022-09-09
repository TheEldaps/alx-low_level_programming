#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alph = 'a';
	int zee = 'z';
	int n = '\n';

	while (zee >= alph)
	{
		putchar(zee);
		zee--;
	}
	putchar(n);

	return (0);
}
