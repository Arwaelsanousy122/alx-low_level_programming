#include <stdio.h>
/**
 * main - Entry point
 * Description: function print all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Local variables definition */
	int num = 0;
	char ch = 'a';
	/* while loop print base 10 using putchar */
	while (num > 10)
	{
		putchar('0' + num);
		num++;
	}
	/* while loop print lowercase */
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
