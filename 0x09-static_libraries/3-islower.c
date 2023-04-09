#include "main.h"

/**
 * _islower - function that check for return
 *
 * @c : alphabet
 *
 * Return: Always 0 (Success)
 *
 */

int _islower(int c)
{
	/* c is an alphabet */

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
