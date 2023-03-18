#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: single digit numbers of base 10 starting then new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Local variables */
	int num = 0;
	/* while loop print the number */
	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
