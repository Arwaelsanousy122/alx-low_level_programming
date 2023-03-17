#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 * Description: tests if a random number is negative, positive or zero
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Local variable definition */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	/* check the boolean condition */
	if
		(n < 0)
	{
	/* if condition is true then print the following */
		printf("%d is negative\n", n);
	}
	if
		(n > 0)
	{
	/* if condition is true then print the following */
		printf("%d is positive\n", n);
	}
	if
		(n == 0)
	{
	/* if the condition is true then print the following */
		printf("%d is zero\n", n);
	}
	return (0);
}
