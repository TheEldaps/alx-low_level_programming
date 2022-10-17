#include <stdard.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	
	else
		va_list data;
		va_start(data, n);

		for (i=0; i < n; i++)
		{
			sum = sum + va_args;
		
		return (sum);
