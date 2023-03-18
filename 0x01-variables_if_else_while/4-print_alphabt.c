#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: function print lowercase alphabet except e and q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Local variables */
	char ch = 'a';
	/* while loop print lowecase alphabet except e and q */
	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
			ch++;
		}
	}

	putchar('\n');
	return (0);
}
