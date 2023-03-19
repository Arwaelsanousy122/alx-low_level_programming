#include <stdio.h>
/**
 * main - Entry point
 * Description: all possible different combinations of three digits
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	/* Local variables definition */
	int digit1, digit2, digit3;

	for (digit1 = 0; digit1 < 8; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 9; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 < 10; digit3++)
			{
				Putchar('0' + (digit1 % 10));
				putchar('0' + (digit2 % 10));
				putchar('0' + (digit3 % 10));

				if (digit1 == 7 && digit2 == 8 && digit3 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
