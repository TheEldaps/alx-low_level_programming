#include <stdio.h>

void main()
{
	int n = 2;
	if (n <= 98)
	{	for (; n <= 98; n++)
			printf("%d, ", n);
				if (n < 98)
					printf(",");
					printf(" ");
	}
	else
	{	for (; n >= 98; n--)
		printf("%d", n);
			if (n != 98)
				putchar(',');
	}
}
