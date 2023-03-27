#include "main.h"
/**
* jack_bauer - function that prints
* every minute of the day of Jack Bauer, starting from 00:00 to 23:59
*
*/

void jack_bauer(void)
{
	/* Local variables definition */
	int digit1, digit2, digit3, digit4, num1, num2;

	for (digit1 = 0; digit1 < 3; digit1++)
	{
		_putchar('0' + digit1);
		for (digit2 = 0; digit2 < 4; digit2++)
		{
			_putchar('0' + digit2);
			_putchar(':');
		}
	}
	for (digit3 = 0; digit3 < 6; digit3++)
		{
			_putchar('0' + digit3);
			for (digit4 = 0; digit4 < 10; digit4++)
			{
				_putchar('0' + digit4);
			}
		}
}
