#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenate to  the nth value of s2
 * @s1: pointer to hold string1
 * @s2: pointer to hold string2
 * @n: int
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, k, total_length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 ="";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	if (n >= j)
		n = j;
	total_length = i + n;
	ptr = malloc(sizeof(char) *  total_length);

	if (ptr == NULL)
		return (NULL);

	for (k = 0; k < total_length; k++)
	{
		k < i ? (ptr[k] = s1[k]) : (ptr[k] = s2[k - i]);
	}
	ptr[total_length] = '\0';
	return (ptr);
}
