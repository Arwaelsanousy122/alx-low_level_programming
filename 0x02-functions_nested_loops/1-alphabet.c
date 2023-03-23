#include "main.h"

/**
 * main - Entery point
 *
 * Description: alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main (void)
{
	char sentence[] = "a-z";
	int i;
	for (i = 0; sentence[i] != '\0'; i++)
	{
	putchar(sentence[i]);
	}
	putchar('\n');
	return (0);
}
