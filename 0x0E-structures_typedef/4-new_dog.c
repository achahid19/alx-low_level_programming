#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - function that creates a new dog's struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to new dog's struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_doge;
	char *namecp, *ownercp;
	int len_namecp, len_ownercp;

	len_namecp = strlen(name) + 1;
	len_ownercp = strlen(owner) + 1;

	new_doge = malloc(sizeof(dog_t));
	if (new_doge == NULL)
		return (NULL);

	namecp = malloc(sizeof(char) * len_namecp);
	if (namecp == NULL)
	{
		free(new_doge);
		return (NULL);
	}

	ownercp = malloc(sizeof(char) * len_ownercp);
	if (ownercp == NULL)
	{
		free(new_doge);
		free(namecp);
		return (NULL);
	}

	strcpy(namecp, name);
	strcpy(ownercp, owner);
	new_doge->name = namecp;
	new_doge->age = age;
	new_doge->owner = ownercp;
	return (new_doge);
}
