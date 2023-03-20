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
	int digit1, digit2, digit3, digit4, num1, num2;

	for (digit1 = 0; digit1 <= 9; digit1++)
	{
		for (digit2 = 0; digit2 <= 9; digit2++)
		{
			for (digit3 = 0; digit3 <= 9; digit3++)
			{
				for (digit4 = 0; digit4 <= 9; digit4++)
				{
					num1 = (digit1 * 10) + digit2;
					num2 = (digit3 * 10) + digit4;
					if (num1 < num2)
					{
					putchar('0' + digit1);
					putchar('0' + digit2);
					putchar(' ');
					putchar('0' + digit3);
					putchar('0' + digit4);
					if (digit1 == 9 && digit2 == 8 && digit3 == 9 && digit4 == 9)
					continue;
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
