#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: combination of two two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Local variables definition */
	int digit1, digit2;

	for (digit1 = 0; digit1 <= 99; digit1++)
	{
		for (digit2 != digit1; digit2 <= 99; digit2++)
		{
				putchar('0' + (digit1 / 10));
				putchar('0' + (digit1 % 10));
				putchar(' ');
				putchar('0' + (digit2 / 10));
				putchar('0' + (digit2 % 10));
				if (digit1 == 98 && digit2 == 99)
						continue;
					putchar(',');
					putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
