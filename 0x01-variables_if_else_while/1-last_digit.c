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
	int Last_dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Last_dig = n % 10;
	/* your code goes there */
	if
		(Last_dig > 5)
	{
	/* if condition is true then print the following */
		printf("Last digit of %d is %d and is greater than 5\n", n, Last_dig);
	}
	if
		(Last_dig == 0)
	{
	/* if condition is true then print the following */
		printf("Last digit of %d is %d and is 0\n", n, Last_dig);
	}
	if
		(Last_dig != 0 && Last_dig < 6)
	{
	/* if condition is true then print the following */
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Last_dig);
	}
	return (0);
}
