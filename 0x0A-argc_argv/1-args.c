#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * Your program should print a number, followed by a new line
 *
 * @argc: the no. of arguments
 * @argv: the array of string pointers
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%d\n", argc);
	}
	return (0);
}
