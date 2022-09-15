#include "main.h"
/**
 *_isupper -  inficates if a parameter is uppecase
 *Return: 0 is returned if lowercase, else 1
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
