#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - convert binary value to int value
 * @b: binary value
 * Return: int form of binary val
 */
unsigned int binary_to_uint(const char *b)
{
	int i, len, val;
	unsigned int num;

	len = 0;
	num = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
		len++;
	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	val = len - 1;
	for (i = 0; i < len; i++)
	{
		num += (b[i] - '0') * (1 << val);
		val--;
	}
	return (num);
}
