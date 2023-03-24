#include "main.h"
/**
 * main - Fizz-Buzz test
 *
 * Return: Always 0
 *
 */

int main(void)
{
	/* Local variables definition */
	int i;

	for (i >= 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		if else(i % 5 == 0)
		{
			printf("Buzz");
		}
		if else(i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%i", i);
		}
		if (i < 100)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
