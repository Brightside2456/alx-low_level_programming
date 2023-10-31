#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *array;
	int i, j, m, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	size = i + j + 1;

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (m = 0; m < size; m++)
		m < i ? (array[m] = s1[m]) : (array[m] = s2[m - i]);

	array[size] = '\0';
	return (array);
}
