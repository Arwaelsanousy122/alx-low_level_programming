#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Write a program that prints its name, followed by a new line.
 * If you rename the program, it will print
 * the new name, without having to compile it again
 * You should not remove the path before the name of the program
 */

int main(int argc, char* argv[])
{
	int count;
	for (count = 0; count < argc; count++)
	{
	printf("%s", argv[count]);
	}
	return (0);
}
