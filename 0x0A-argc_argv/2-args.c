#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that prints all arguments it receives.
 * All arguments should be printed, including the first one
 * Only print one argument per line, ending with a new line
 *
 * @argc: the no. of arguments
 * @argv: the array of string pointers
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
