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
	int g = 'a';
	int q = 'z';
	int k = '\n';

	while (g <= q)
	{
		if (g != 'e' && g != 'q')
		{
			putchar(g);
		}
		g++;
	}
	putchar(k);

	return (0);

}
