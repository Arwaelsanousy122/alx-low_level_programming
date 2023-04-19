#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 *
 * @d: The beatiful dog
 *
 * Return: If an element of d is NULL, print (nil) instead of this element.
 * (if name is NULL, print Name: (nil))
 * If d is NULL print nothing.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if ((*d).name == NULL)
	{
		(*d).name = "(nil)";
	}
	if ((*d).owner == NULL)
	{
		(*d).owner = "(nil)";
	}

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
