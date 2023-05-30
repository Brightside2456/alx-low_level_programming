#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Func to print any number to 98
 *
 * @n: Start number
 *
 * Return: void
 */
void print_to_98(int n)
{
	int next_num;

	next_num = n;
	printf("%d", n);
	while (next_num != 98)
	{
		if (n == 98)
		{
			break;
		}
		else if (n < 98)
		{
			next_num++;
			printf(", %d", next_num);
		}
		else if (n > 98)
		{
			next_num--;
			printf(", %d", next_num);
		}
	}
	printf("\n");
}
