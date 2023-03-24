#include "main.h"
/**
 * main - Fizz-Buzz test
 *
 * _putchar : print Fizz, Buzz or both
 *
 * @string : sentence
 *
 * @outputString : write sentences as string
 *
 * Return: Always 0
 *
 */

void outputString(char *);

int main(void)
{
	/* Local variables definition */
	int i;

	char sentence1[] = "Fizz";
	char sentence2[] = "Buzz";
	char sentence3[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			outputString(sentence1);
		}
		else if (i % 5 == 0)
		{
			outputString(sentence2);
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			outputString(sentence3);
		}
		else
		{
			_putchar(i);
		}
	}
	return (0);
}
/**
 * _putchar
 * Return :char c
 */
int _putchar(char c)
{
	return (_putchar(c));
}
