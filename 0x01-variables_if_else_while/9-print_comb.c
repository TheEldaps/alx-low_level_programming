#include <stdio.h>

/**
 * main - a programme that prints all the possible
 * combination of single digit number
 *
 * Return - Always 0 (Success)
 */

int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
			if (n != 9)
			{
				putchar(',');
				putchar(' ');
			}
		n++;
	}
	putchar('\n');

	return (0);
}
