#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 on success
 */

int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57;)
	{
		for (j = 48; j <= 57;)
		{
			if (i == j)
			{
				j++;
			}
			else
			{
				putchar(i);
				putchar(j);
				putchar(44);
				putchar(32);
				j++;
			}
		}
		i++;
	}
	putchar(10);

	return (0);
}
