#include <stdio.h>
#include <stdlib.h>
/**
 * main- entry point for the programme
 * Return: exit door for the programme
 * @argc: counts the parameters passed to the\
 * programme and stores it as an integer
 * @argv: array of the strings passed to the programme
 *
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		int result = a * b;

		printf("%d\n", result);
		return (0);
	}
}
