#include "main.h"
/**
 * print_numbers - function prints the numbers, from 0 to 9
 *
 */

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		i++;
		_putchar(i + '0');
	}
	_putchar('\n');
}
