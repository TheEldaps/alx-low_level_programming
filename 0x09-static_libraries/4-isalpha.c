#include "main.h"

/**
 * _isalpha - check the code
 * Return: 0 if c is not a letter or 1 if it is
 * @c: the parameter
 *
 */

int _isalpha(int c)
{
	if (c > 97 && c < 123)
	{
		return (1);
	}
	else if (c > 64 && c < 90)
	{
		return (1);
	}
	else
		return (0);
}
