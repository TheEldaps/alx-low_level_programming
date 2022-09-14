#include "main.h"

/**
 * main - entry point for this program
 *
 * Return: successful exevution will return 0 else 1
 */

int main(void)
{
	char putchar[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	unsigned int c;

	for (c = 0; c <	sizeof(putchar); c++)
		_putchar(putchar[c]);

	_putchar('\n');

	return (0);
}
