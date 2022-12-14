#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that retruns a pointer to allocated memory
 *
 *@b: size of memory to be alloacted in bytes
 *Return: Null or 98
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
