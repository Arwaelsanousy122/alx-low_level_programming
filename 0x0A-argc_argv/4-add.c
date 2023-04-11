#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
	int num;
	int sum = 0;

	for (count = 0; count < argc; count++)
	{
		for (num = 0; argv[count][num] != '\0'; num++)
		{
			if (!isdigit(argv[count][num]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[count]);
	}
	printf("%d\n", sum);
	return (0);
}
