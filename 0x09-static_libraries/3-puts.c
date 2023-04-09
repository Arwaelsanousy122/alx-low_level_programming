#include "main.h"
/**
 * _puts - function that prints a string
 *
 * @str: contains the string
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	int g = 0;

	while (str[g] != '\0')
	{
		_putchar(str[g]);
		g++;
	}
	_putchar('\n');
	return;
}
