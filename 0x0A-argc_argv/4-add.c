#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers.
 *
 * @argc: the no. of arguments
 * @argv: the array of string pointers
 *
 * Return: If one of the number contains symbols that are not digits,
 * print Error, followed by a new line, and return 1
 * and return 0 if all numbers are digits
 */

int main(int argc, char *argv[])
{
	int count;
	int sum = 0;

	for (count = 0; count < argc; count++)
	{

		if (argc == 1)
		{
			printf("0\n");
		}
		else if ((atoi(argv[count]) >= 'A' && atoi(argv[count]) <= 'Z') && (atoi(argv[count]) >= 'a' && atoi(argv[count]) <= 'z'))
		{
			printf("Error\n");
			return (1);
			break;
		}
		else
		{
			sum += atoi(argv[count]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
