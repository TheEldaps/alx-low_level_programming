#include "main.h"

/**
 *swap_int - swaps the values of two integers
 *@a: parameter
 *@b: second parameter of type int
 *Return: always
 */

void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}