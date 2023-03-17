#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the uppercase of alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Local variables definition */
	char chl = 'a';
	char cha = 'A';
	/* while loop print lowecase alphabet */
	while (chl <= 'z')
	{
		putchar(chl);
		chl++;
	}
	/* while loop print uppercase alphabet */
	while (cha <= 'Z')
	{
		putchar(cha);
		cha++;
	}
	/* print new line */
	putchar('\n');
	return (0);
}
