#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Local variables definition*/
	int num = 0;
	/* while loop prints single_digit numbers */
	while (num < 10)
	{
		putchar('0' + num);
		putchar(', ');
		num++;
	}
	putchar('\n');
	return (0);
}
