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
	int Alph = 'A';
	int zee = 'z';
	int Zee = 'Z';

	for (alph = 'a'; alph <= zee; alph++)
		putchar(alph);
	for (Alph = 'A'; Alph <= Zee; Alph++)
		putchar(Alph);
	printf("\n");
	return (0);
}
