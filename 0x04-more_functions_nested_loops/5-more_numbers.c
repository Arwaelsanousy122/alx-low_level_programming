#include "main.h"
/**
 * more_numbers - function prints the numbers, from 0 to 14 ten times
 *
 */

void more_numbers(void)
{
	int i;

	i = 0;

	for (i >= 0; i <= 14; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
