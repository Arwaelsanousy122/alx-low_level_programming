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
	int sep1 = 0;
	int sep2 = 0;
	/* while loop prints single_digit numbers */
	while (num < 10)
	{
		putchar(sep1);
		putchar(sep2);
		putchar('0' + num);
		sep1 = ',';
		sep2 = ' ';
		num++;
	}
	putchar('\n');
	return (0);
}
