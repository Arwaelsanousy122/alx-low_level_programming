#include "main.h"
#include <stdio.h>
/**
* print_sign - function that prints the sign of a number
*
* @c : the variable to be tested
*
*/

int print_sign(int n)
{
    if (n > 0)
	{
	_putchar('0' + 1);
	return (1);
	}
	else if (n < 0)
	{
	_putchar('0' + -1);
	retrun (-1);
	}
	else
	{
	_putchar('0' + 0);
	return (0);
	}
}
