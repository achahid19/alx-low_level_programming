#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct
 * @d: pointer to the struct
 * Return: void
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name != NULL) ? d->name : "(nill)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s", (d->owner != NULL) ? d->owner : "(nill)");
	}
}
