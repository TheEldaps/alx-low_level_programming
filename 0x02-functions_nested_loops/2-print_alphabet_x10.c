#include "main.h"

/**
 *print_alphabet_x10 - entry point for the programme
 *return - not needed since the return type is void
 */

void print_alphabet_x10(void)
{
	int i = 'a';
	int zee = 'j';

	for (i = 'a'; i <= zee; i++)
	{
		int q = 'a';
		int p = 'z';

		for (q = 'a'; q <= p; q++)
		{
			_putchar(q);
		}
		_putchar('\n');
	}
}
