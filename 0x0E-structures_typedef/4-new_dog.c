#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog - function that creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return:  pointer to dog struct object
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	int i, j;

	for (i = 0; name[i] != '\0'; i++)
		;
	i++;
	for (j = 0; owner[j] != '\0'; j++)
		;
	j++;
	my_dog = malloc(sizeof(dog_t));
	my_dog->name = malloc(sizeof(char) * i);
	my_dog->owner = malloc(sizeof(char) * j);
	if (my_dog->name == NULL || my_dog->owner == NULL || my_dog == NULL)
	{
		free(my_dog->name);
		free(my_dog->owner);
		free(my_dog);
		return (NULL);
	}

	my_dog->name = name;
	my_dog->owner = owner;
	my_dog->age = age;
	return (my_dog);
}
