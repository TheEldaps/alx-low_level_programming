#include "main.h"
/**
 *_isupper -  inficates if a parameter is uppecase
 *Return: 0 is returned if lowercase, else 1
 *@c: parameter
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
