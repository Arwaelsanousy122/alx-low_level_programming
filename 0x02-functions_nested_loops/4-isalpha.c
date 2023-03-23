#include "main.h"

/**
 * _isalpha - fucntion check for alphabet
 *
 * @c : alphabet lower or upper
 *
 * Return: if alphabet upper or lower 1 if else 0 (Success)
 */

int _isalpha(int c);
{
	if (c >= 65 && c <= 90 && c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
