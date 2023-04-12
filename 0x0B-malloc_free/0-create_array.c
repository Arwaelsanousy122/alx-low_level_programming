#include "main.h"
#include <stdlib.h>
/**
 * create_array -  function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @c: the number of elements in the array
 * @size: the size parameter
 *
 * Return: NULL if size = 0
 */

char *create_array(unsigned int size, char c)
{
	/* pointer that hold the base address of the block created */
	unsigned int i;
	char *ptr;

	/* Dynamically allocate the memory using malloc */
	ptr = (char *)malloc(c * sizeof(size));

	/* check if the memory is allocated or not */
	if (size == 0 || ptr == NULL)
	{
		return (NULL);
	}

	/* Get the elements of the array */
	for (i = 0; i < size; i++)
	ptr[i] = c;
	return (ptr);
}
