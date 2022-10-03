#include "main.h"

/**
 * _islower - prints which alohabet is lower case
 * @c : charcater to check
 * Return: 1 indicates lower case else uppercase
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);

	}
	else
	{
		return (0);
	}
}
