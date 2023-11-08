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
	dog_t *n_dog;
	int i, j, k;
	char *name_c, *owner_c;

	n_dog = malloc(sizeof(dog_t));
	if (n_dog == NULL)
		return (NULL);
	n_dog->age = age;
	if (name == NULL || owner == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->name = name;
	n_dog->owner = owner;

	for (i = 0; name[i] != '\0'; i++)
		;
	i++;
	for (j = 0; owner[j] != '\0'; j++)
		;
	j++;
	name_c = malloc(sizeof(char) * i);
	owner_c = malloc(sizeof(char) * j);
	if (name_c == NULL || owner_c == NULL)
	{
		free(name_c);
		free(owner_c);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		name_c[k] = name[k];
	name_c[i]  = '\0';
	for (k = 0; k < j; k++)
		owner_c[k] = owner[k];
	owner_c[j] = '\0';

	return (n_dog);
}
