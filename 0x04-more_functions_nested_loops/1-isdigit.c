#include "main.h"

/**
 *_isdigit - checks if the value for see is a number
 *@c:the argument passed to the function
 *Return: either 0 or 1
 */

int _isdigit(int c)
{
	if (c >= '0' && c < '10')
		return (1);
	else
		return (0);
}
