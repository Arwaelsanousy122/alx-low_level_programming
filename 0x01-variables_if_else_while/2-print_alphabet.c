#include <stdio.h>
/**
 * main - Entry point
 * Description: function print lowercase alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Local variables */
	char ch = 'a';
	/* while loop print lowecase alphabet */
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
