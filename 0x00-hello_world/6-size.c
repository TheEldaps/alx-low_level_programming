#include <stdio.h>

/**                                                * main - Entry point
 *                                                 * Return: Always 0 (Success)                      */
int main(void)
{
	char character;
	int integer;
	float Float;
	long int long_integer;
	long long int long_long_integer;

	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of int: %lu byte(s)\n", sizeof(int));
	printf("Size of long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of float: %lu byte(s)\n", sizeof(float));
	return (0);
}
