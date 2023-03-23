#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: function that prints text
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char sentence[] = "_putchar";
	int i;
	  for (i = 0; sentence[i] != '\0'; i++)
	  {
		  putchar(sentence[i]);
	  }
	putchar('\n');
	return (0);
}
