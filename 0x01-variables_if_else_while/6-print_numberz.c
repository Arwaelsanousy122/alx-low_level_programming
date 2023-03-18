#include <stdio.h>
/**
 * main - Entry point
 * Description: function print base 10 using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Local variables */
	int num = 0;
	/* while loop print base 10 using putchar */
	while (num < 10)
	{
		putchar('0' + num);
		num++;

	}
	putchar('\n');
	return (0);
}
