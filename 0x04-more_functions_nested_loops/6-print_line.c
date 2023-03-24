#include "main.h"
/**
 * print_line -  function draws a straight line in the terminal
 *
 * @n : the number of loop repeating
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (n)
		{
			_putchar('0' + '_');
		}
		_putchar('\n');
	}
}
