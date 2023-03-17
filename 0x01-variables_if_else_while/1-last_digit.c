#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * Description: Test the last digit of random number
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Local variables definition */
	int n;
	int Last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Last_digit = n % 10;
	/* your code goes there */
	if
		(Last_digit > 5)
	{
	/* if condition is true then print the following */
		printf("Last digit of %d is %d and is greater than 5\n", n, Last_digit);
	}
	if
		(Last_digit == 0)
	{
	/* if condition is true then print the following */
		printf("Last digit of %d is %d and is 0\n", n, Last_digit);
	}
	if
		(Last_digit != 0 && Last_digit < 6)
	{
	/* if condition is true then print the following */
		printf("Last digit of %d is %d & is less than 6 and not 0\n", n, Last_digit);
	}
	return (0);
}
