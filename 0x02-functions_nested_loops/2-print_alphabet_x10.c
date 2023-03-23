#include "main.h"

/**
 * print_alphabet_x10 - function prints 10 times the alphabet
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int letter;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (letter = 97; letter <= 122; letter++)
		{
		_putchar();
		}
	}
	_putchar('\n');
}

