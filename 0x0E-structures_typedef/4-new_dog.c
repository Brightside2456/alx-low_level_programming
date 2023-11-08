#include <stdlib.h>
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
	char *name_copy, *owner_copy;
	int i, j, k, l;

	for (i = 0; name[i] != '\0'; i++)
	i++;
	for (j = 0; owner[j] != '\0'; j++)
	j++;
	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->name = malloc(sizeof(char) * i);
	my_dog->owner = malloc(sizeof(char) * j);
	if (my_dog->name == NULL || my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog->owner);
		free(my_dog);
		return (NULL);
	}
	my_dog->name = name;
	my_dog->owner = owner;
	my_dog->age = age;
	name_copy = malloc(i);
	if (name_copy == NULL)
		return (NULL);
	owner_copy = malloc(j);
	if (owner_copy == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		name_copy[k] = name[k];
	name_copy[i] = '\0';
	for (l = 0; l < j; l++)
		owner_copy[l] = name[l];
	owner_copy[j] = '\0';
	return (my_dog);
}
