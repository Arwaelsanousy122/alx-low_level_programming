#include "main.h"
/**
* times_table - prints the 9 timrs table
* starting with 0
*
* Return : Always 0
*/

void times_table(void)
{
	int num1, num2, num3;

	num1 = num2 * num3
	for (num2 = 0; num2 < 10; num2++)
	{
		for (num3 = 0; num3 < 10; num3++)
		{
			_putchar('0' + num1);
			if (num1 == 81 && num2 == 9 && num3 == 9)
				continue;
			_putchar(',');
			_putchar(' ');
		}
	}
	return (0);
}
