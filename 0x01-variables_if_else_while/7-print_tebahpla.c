#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the lowercase alphabet in reverse followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Local variables */
	char ch = 'z';
	/* while loop print lowecase alphabet in reverse */
	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
