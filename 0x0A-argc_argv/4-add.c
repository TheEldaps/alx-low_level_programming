#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main- entry point for the programme
 * Return: exit for the programme
 * @argc: counts arameters to the programme
 * @argv: array of strings passed to the programme
 *
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;
	int a;
	int j;


	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}

		a = atoi(argv[i]);
		sum = sum + a;
	}

	printf("%d\n", sum);
	return (0);
}
