#include <stdio.h>
/**
 * jackbauer - prints everytick of the secobd throughout the day
 * Return: the exit point for the programnd
 */

void main(void)
{
	int a = 0, b = 0;

	for (a = 0; a < 3; a++)
		for (b = 0; b <= 9; b++)
			if (a == 2 && b == 4)
			{
				break;
			}
			int c = 0, d = 0;

			for (c = 0; c < 6; c++)
				for (d = 0; d <= 9; d++)
					putchar(a + '0');
					putchar(b + '0');
					putchar(':');
					putchar(c + '0');
					putchar(d + '0');
}
