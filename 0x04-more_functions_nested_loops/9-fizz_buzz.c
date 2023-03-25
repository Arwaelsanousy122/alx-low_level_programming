#include "main.h"
/**
 * outputString - function that prints a string
 *
 * @str: string to print
 *
 * Return : void
 */

void outputString(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * main - Fizz-Buzz test
 *
 * Return : 0 (Success)
 *
 */


int main(void)
{
	/* Local variables definition */
	int i;

	char sentence1[] = "FizzBuzz";
	char sentence2[] = "Buzz";
	char sentence3[] = "Fizz";

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			outputString(sentence1);
		}
		else if (i % 5 == 0)
		{
			outputString(sentence2);
		}
		else if (i % 3 == 0)
		{
			outputString(sentence3);
		}
		else
		{
			_putchar(i + '0');
		}
		_putchar(' ');
	}
	return (0);
}

/**
 * _putchar - function that prints a character
 * @c: character to print
 *
 * Return: 1 on success, -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
