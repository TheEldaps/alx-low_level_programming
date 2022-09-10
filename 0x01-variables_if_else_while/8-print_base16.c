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
	int hex_d = 0;
	int hex_l = 9;
	char hex_a = 'A';
	char hex_b = 'F';
	char n = '\n'

	; while (hex_d <= hex_l)
	{
		putchar(hex_d + '0');
		hex_d++;
	}
	while (hex_a <= hex_b)
	{
		putchar(hex_a);
		hex_a++;
	}

	putchar(n);

	return (0);
}
