#include <stdio.h>
#include <stdlib.h>

/**
 * main - program entry point
 * Return: 0
 *@argc: stores string counts
 *@argv: array of pointers to string
 *@i: variable
 *
 */


int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc; i++)
	{
		printf("%s \n", argv[i]);
	}
	printf("\n");
	return (0);
}
