#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all possible combinations of double-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Local variables definition */
	int digit1, digit2;
	/*while loop */
	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			putchar('0' + (digit1 % 10));
			putchar('0' + (digit2 %10));
			if (digit1 != 8 && digit2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
