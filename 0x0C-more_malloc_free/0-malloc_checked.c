#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that retruns a pointer to allocated memory
 *
 *@b: size of memory to be alloacted in bytes
 *
 */

void *malloc_checked(unsigned int b)
{
	void *p;
	
	p = malloc(b);
	if (p = NULL)
	{
		return (98);
	}

	return (p);
}