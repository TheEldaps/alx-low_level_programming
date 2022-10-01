#include <stdio.h>
#include <stdlib.h>

/**
 *main- entry point of programme
 *Return: exit point of programme
 *@argc: parameter count
 *@argv: array of the arguments passed to the programme
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d \n", (argc - 1));
	return (0);
}
