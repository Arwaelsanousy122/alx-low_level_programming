#include "main.h"
/**
 * print_most_numbers - function prints the numbers, from 0 to 9 except 4, 2
 *
 */

void print_most_numbers(void)
{
	int i;

	i = 48;

	for (i >= 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
		{}
		else 
		{
		_putchar(i);
		}
	}
	_putchar('\n');
}
