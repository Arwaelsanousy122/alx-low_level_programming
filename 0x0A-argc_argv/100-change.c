#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the minimum number of
 * coins to make change for an amount of money.
 *
 * @argc: the no. of arguments
 * @argv: the array of string pointers
 *
 * Return: 1 if the number of arguments passed to your program is not exactly 1
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else if (atoi(argv[argc]) <= 0)
	{
		printf("0\n");
	}
}
