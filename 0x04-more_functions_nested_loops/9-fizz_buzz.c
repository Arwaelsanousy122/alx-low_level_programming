#include "main.h"
/**
 * main -  Fizz-Buzz test
 *
 */

int main(void)
{
	char sentence_1[] = "Fizz";
	char sentence_2[] = "Buzz";
	int i;
	int m;

	for (i >= 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			for (m = 0; sentence_1[m] != '\0'; m++)
			{
				_putchar(sentence_1[m]);
			}
		}
		if else (i % 5 == 0)
		{
			for (m = 0; sentence_2[m] != '\0'; m++)
                        {
                                _putchar(sentence_2[m]);
                        }
		}
		if else (i % 3 == 0 && i % 5 == 0)
		{
			for (m = 0; sentence_1[m] != '\0'; sentence_2[m] != '\0'; m++)
                        {
                                _putchar(sentence_1[m]sentence_2[m]);
                        }
		}
	}
	_putchar('\n');
}
