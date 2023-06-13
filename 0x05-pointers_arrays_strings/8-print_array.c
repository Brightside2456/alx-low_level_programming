#include <stdio.h>

/**
 * print_array - Funtion to print array *a of lenght n
 * @a: array
 * @n: number to print
 * Return: null
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		printf("%d", a[0]);
		for (i = 1; i < n; i++)
		{
			printf(", %d", a[i]);
		}
	}
	putchar('\n');
}
