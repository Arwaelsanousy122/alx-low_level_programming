#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 *
 * @argc: the no. of arguments
 * @argv: the array of string pointers
 *
 * Return: 0 if mult has value and 1 if not
 */

int main(int argc, char *argv[])
{
	int mult;

	mult = atoi(argv[1]) * atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", mult);
		return (0);
	}
}
