#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point of the programme
 * Return: exit point of the programme
 *@argc: argument count
 *@argv: array of string
 *@x: index to iterate through the elements of the string array
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s \n", argv[x]);
	}
	return (0);
}
