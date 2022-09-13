#include "main.h"

/**
 * _abs - converts a negative integer to postive
 * Return: always 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n / -1;
		return (n);
	}
	else
		return (n);
}
