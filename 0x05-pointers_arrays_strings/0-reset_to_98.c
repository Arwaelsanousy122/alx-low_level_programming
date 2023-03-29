#include "main.h"
/**
* reset_to_98 - function that takes 
* a pointer to an int as parameter 
* and updates the value it points to to 98
*
* Return : Always 0
*/

void reset_to_98(int *n)
{
	int x;

	n = &x;
	*n = 98;
	_putchar(n + '0');
}
