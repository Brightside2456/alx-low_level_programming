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
	int temp;

	for (i = 48; i <= 57;)
	{
		for (j = 48; j <= 57;)
		{
			if (i == j)
			{
				j++;
				temp = i;
				i = j;
				j = temp;
			}
			else if (i == j)
			{
				temp = j;
				j = i;
				i = temp;
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
;
	return (0);
}
