#include "main.h"

/**
 * print_sign - prints the sign of kts parameter
 * @n: the larameter whose sign will be checked
 * Return: returns 1 and orinta + if n is positive,0 and 0 if not /
 * and -1 and - if otherwise
 */

int print_sign(int n)
{
	if (n > 0)
		_putchar(43);
		return (1);
	else if (n < 0)
		_putchar(45);
		return (-1);
	else
		_puchar(48);
		return (0);
}
