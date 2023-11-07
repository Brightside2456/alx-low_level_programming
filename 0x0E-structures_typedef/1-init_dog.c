#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - func to initialize struct dog
 * @d: struct dog
 * @name: char
 * @age: float
 * @owner: char
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *my_dog;

	my_dog = d;
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;
}
