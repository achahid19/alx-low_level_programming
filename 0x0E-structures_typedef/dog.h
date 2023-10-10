#ifndef DOG_H
#define DOG_H

/**
 * struct dog - declare struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: Struct containing dog's name, age and owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - typedef of dog's struct
*/
typedef struct dog dog_t;

#endif /* DOG_H */
